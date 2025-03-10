.DEFAULT_GOAL := all

CC?=clang

CFLAGS = -g -I. -I./deps/arena -I./deps/fs -I./deps/csv
CFLAGS+= -I./deps/utf8 -I./deps/strchrepl

SOURCES = $(wildcard *.c)
SOURCES+= $(wildcard deps/arena/*.c)
SOURCES+= $(wildcard deps/fs/*.c)
SOURCES+= $(wildcard deps/csv/*.c)
SOURCES+= $(wildcard deps/utf8/*.c)
SOURCES+= $(wildcard deps/strchrepl/*.c)
OBJECTS=$(SOURCES:%.c=%.o)

PROGRAM=build

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(PROGRAM): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

clean:
	rm -rf $(OBJECTS) $(PROGRAM)

all: $(PROGRAM)
