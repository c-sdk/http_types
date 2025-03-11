#include <_string.h>
#include <stdio.h>
#include <stdlib.h>

#include "arena.h"
#include "csv.h"
#include "fs.h"
#include "strchrepl.h"
#include "struppercase.h"

void render_methods(struct csv_t *csv) {
  FILE* output = fs_open("./http_methods.h", "w");

  fprintf(output, "#ifndef __HTTP_TYPES_METHODS__\n");
  fprintf(output, "#define __HTTP_TYPES_METHODS__ 1\n\n");

  for (size_t i = 1; i < csv->row_count - 1; ++i) {
    char** row = csv_row(csv, i);
    fprintf(output, "#define HTTP_METHODS_%s \"%s\"\n", row[0], row[0]);
  }

  fprintf(output, "\n#endif // __HTTP_TYPES_METHODS__\n");

  fclose(output);
}

// http-status-codes-1.csv

void render_headers(struct csv_t *csv) {
  FILE* output = fs_open("./http_headers.h", "w");

  fprintf(output, "#ifndef __HTTP_TYPES_HEADERS__\n");
  fprintf(output, "#define __HTTP_TYPES_HEADERS__ 1\n\n");

  for (size_t i = 1; i < csv->row_count - 1; ++i) {
    char** row = csv_row(csv, i);
    char* name = strdup(row[0]);
    struppercase(name);
    (void)strchrepl(name, '-', '_');
    fprintf(output, "#define HTTP_HEADER_%s \"%s\"\n", name, row[0]);
    free(name);
  }

  fprintf(output, "\n#endif // __HTTP_TYPES_HEADERS__\n");

  fclose(output);
}

void render_statuses(struct csv_t *csv) {
  FILE* output = fs_open("./http_statuses.h", "w");

  fprintf(output, "#ifndef __HTTP_TYPES_STATUSES__\n");
  fprintf(output, "#define __HTTP_TYPES_STATUSES__ 1\n\n");

  for (size_t i = 1; i < csv->row_count - 1; ++i) {
    char** row = csv_row(csv, i);
    char* name = strdup(row[1]);
    (void)strchrepl(name, ' ', '_');
    (void)strchrepl(name, '-', '_');
    struppercase(name);
    if (memcmp(row[1], "Unassigned", strlen("Unassigned")) == 0 ||
        memcmp(row[1], "(Unused)", strlen("(Unused)")) == 0 ||
        memcmp(row[0], "105", strlen("105")) == 0 ||
        memcmp(row[0], "104", strlen("104")) == 0 ||
        memcmp(row[0], "510", strlen("510")) == 0) {
      fprintf(output, "// #define HTTP_STATUS_%s \"%s\"\n", row[0], row[0]);
      fprintf(output, "// #define HTTP_STATUS_%s \"%s\"\n", name, row[1]);
    } else {
      fprintf(output, "#define HTTP_STATUS_%s %s\n", row[0], row[0]);
      fprintf(output, "#define HTTP_STATUS_%s \"%s\"\n", name, row[1]);
    }
    free(name);
  }

  fprintf(output, "\n#endif // __HTTP_TYPES_STATUSES__\n");

  fclose(output);
}

int build(char* filename, void (*render)(struct csv_t*)) {
  arena_t arena = {0};
  arena_create(&arena, 4096 * 16);

  struct csv_t csv = {0};

  const char *content = fs_read(filename);

  (void)csv_parse(&arena, &csv, content);

  render(&csv);

  free((char*)content);

  // csv_free(&csv);
  arena_free(&arena);

  return 0;
}

int main(void) {
  build("methods.csv", render_methods);
  build("field-names.csv", render_headers);
  build("http-status-codes-1.csv", render_statuses);
  return 0;
}
