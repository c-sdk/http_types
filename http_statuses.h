#ifndef __HTTP_TYPES_STATUSES__
#define __HTTP_TYPES_STATUSES__ 1

#define HTTP_STATUS_CODE_100 100
#define HTTP_STATUS_DESCRIPTION_Continue "Continue"
#define HTTP_STATUS_CODE_101 101
#define HTTP_STATUS_DESCRIPTION_Switching Protocols "Switching Protocols"
#define HTTP_STATUS_CODE_102 102
#define HTTP_STATUS_DESCRIPTION_Processing "Processing"
#define HTTP_STATUS_CODE_103 103
#define HTTP_STATUS_DESCRIPTION_Early Hints "Early Hints"
#define HTTP_STATUS_CODE_104 104
#define HTTP_STATUS_DESCRIPTION_"Upload Resumption Supported (TEMPORARY - registered 2024-11-13, expires 2025-11-13)" ""Upload Resumption Supported (TEMPORARY - registered 2024-11-13, expires 2025-11-13)""
// #define HTTP_STATUS_CODE_105-199 "105-199"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_CODE_200 200
#define HTTP_STATUS_DESCRIPTION_OK "OK"
#define HTTP_STATUS_CODE_201 201
#define HTTP_STATUS_DESCRIPTION_Created "Created"
#define HTTP_STATUS_CODE_202 202
#define HTTP_STATUS_DESCRIPTION_Accepted "Accepted"
#define HTTP_STATUS_CODE_203 203
#define HTTP_STATUS_DESCRIPTION_Non-Authoritative Information "Non-Authoritative Information"
#define HTTP_STATUS_CODE_204 204
#define HTTP_STATUS_DESCRIPTION_No Content "No Content"
#define HTTP_STATUS_CODE_205 205
#define HTTP_STATUS_DESCRIPTION_Reset Content "Reset Content"
#define HTTP_STATUS_CODE_206 206
#define HTTP_STATUS_DESCRIPTION_Partial Content "Partial Content"
#define HTTP_STATUS_CODE_207 207
#define HTTP_STATUS_DESCRIPTION_Multi-Status "Multi-Status"
#define HTTP_STATUS_CODE_208 208
#define HTTP_STATUS_DESCRIPTION_Already Reported "Already Reported"
// #define HTTP_STATUS_CODE_209-225 "209-225"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_CODE_226 226
#define HTTP_STATUS_DESCRIPTION_IM Used "IM Used"
// #define HTTP_STATUS_CODE_227-299 "227-299"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_CODE_300 300
#define HTTP_STATUS_DESCRIPTION_Multiple Choices "Multiple Choices"
#define HTTP_STATUS_CODE_301 301
#define HTTP_STATUS_DESCRIPTION_Moved Permanently "Moved Permanently"
#define HTTP_STATUS_CODE_302 302
#define HTTP_STATUS_DESCRIPTION_Found "Found"
#define HTTP_STATUS_CODE_303 303
#define HTTP_STATUS_DESCRIPTION_See Other "See Other"
#define HTTP_STATUS_CODE_304 304
#define HTTP_STATUS_DESCRIPTION_Not Modified "Not Modified"
#define HTTP_STATUS_CODE_305 305
#define HTTP_STATUS_DESCRIPTION_Use Proxy "Use Proxy"
#define HTTP_STATUS_CODE_306 306
#define HTTP_STATUS_DESCRIPTION_(Unused) "(Unused)"
#define HTTP_STATUS_CODE_307 307
#define HTTP_STATUS_DESCRIPTION_Temporary Redirect "Temporary Redirect"
#define HTTP_STATUS_CODE_308 308
#define HTTP_STATUS_DESCRIPTION_Permanent Redirect "Permanent Redirect"
// #define HTTP_STATUS_CODE_309-399 "309-399"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_CODE_400 400
#define HTTP_STATUS_DESCRIPTION_Bad Request "Bad Request"
#define HTTP_STATUS_CODE_401 401
#define HTTP_STATUS_DESCRIPTION_Unauthorized "Unauthorized"
#define HTTP_STATUS_CODE_402 402
#define HTTP_STATUS_DESCRIPTION_Payment Required "Payment Required"
#define HTTP_STATUS_CODE_403 403
#define HTTP_STATUS_DESCRIPTION_Forbidden "Forbidden"
#define HTTP_STATUS_CODE_404 404
#define HTTP_STATUS_DESCRIPTION_Not Found "Not Found"
#define HTTP_STATUS_CODE_405 405
#define HTTP_STATUS_DESCRIPTION_Method Not Allowed "Method Not Allowed"
#define HTTP_STATUS_CODE_406 406
#define HTTP_STATUS_DESCRIPTION_Not Acceptable "Not Acceptable"
#define HTTP_STATUS_CODE_407 407
#define HTTP_STATUS_DESCRIPTION_Proxy Authentication Required "Proxy Authentication Required"
#define HTTP_STATUS_CODE_408 408
#define HTTP_STATUS_DESCRIPTION_Request Timeout "Request Timeout"
#define HTTP_STATUS_CODE_409 409
#define HTTP_STATUS_DESCRIPTION_Conflict "Conflict"
#define HTTP_STATUS_CODE_410 410
#define HTTP_STATUS_DESCRIPTION_Gone "Gone"
#define HTTP_STATUS_CODE_411 411
#define HTTP_STATUS_DESCRIPTION_Length Required "Length Required"
#define HTTP_STATUS_CODE_412 412
#define HTTP_STATUS_DESCRIPTION_Precondition Failed "Precondition Failed"
#define HTTP_STATUS_CODE_413 413
#define HTTP_STATUS_DESCRIPTION_Content Too Large "Content Too Large"
#define HTTP_STATUS_CODE_414 414
#define HTTP_STATUS_DESCRIPTION_URI Too Long "URI Too Long"
#define HTTP_STATUS_CODE_415 415
#define HTTP_STATUS_DESCRIPTION_Unsupported Media Type "Unsupported Media Type"
#define HTTP_STATUS_CODE_416 416
#define HTTP_STATUS_DESCRIPTION_Range Not Satisfiable "Range Not Satisfiable"
#define HTTP_STATUS_CODE_417 417
#define HTTP_STATUS_DESCRIPTION_Expectation Failed "Expectation Failed"
#define HTTP_STATUS_CODE_418 418
#define HTTP_STATUS_DESCRIPTION_(Unused) "(Unused)"
// #define HTTP_STATUS_CODE_419-420 "419-420"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_CODE_421 421
#define HTTP_STATUS_DESCRIPTION_Misdirected Request "Misdirected Request"
#define HTTP_STATUS_CODE_422 422
#define HTTP_STATUS_DESCRIPTION_Unprocessable Content "Unprocessable Content"
#define HTTP_STATUS_CODE_423 423
#define HTTP_STATUS_DESCRIPTION_Locked "Locked"
#define HTTP_STATUS_CODE_424 424
#define HTTP_STATUS_DESCRIPTION_Failed Dependency "Failed Dependency"
#define HTTP_STATUS_CODE_425 425
#define HTTP_STATUS_DESCRIPTION_Too Early "Too Early"
#define HTTP_STATUS_CODE_426 426
#define HTTP_STATUS_DESCRIPTION_Upgrade Required "Upgrade Required"
// #define HTTP_STATUS_CODE_427 "427"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_CODE_428 428
#define HTTP_STATUS_DESCRIPTION_Precondition Required "Precondition Required"
#define HTTP_STATUS_CODE_429 429
#define HTTP_STATUS_DESCRIPTION_Too Many Requests "Too Many Requests"
// #define HTTP_STATUS_CODE_430 "430"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_CODE_431 431
#define HTTP_STATUS_DESCRIPTION_Request Header Fields Too Large "Request Header Fields Too Large"
// #define HTTP_STATUS_CODE_432-450 "432-450"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_CODE_451 451
#define HTTP_STATUS_DESCRIPTION_Unavailable For Legal Reasons "Unavailable For Legal Reasons"
// #define HTTP_STATUS_CODE_452-499 "452-499"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_CODE_500 500
#define HTTP_STATUS_DESCRIPTION_Internal Server Error "Internal Server Error"
#define HTTP_STATUS_CODE_501 501
#define HTTP_STATUS_DESCRIPTION_Not Implemented "Not Implemented"
#define HTTP_STATUS_CODE_502 502
#define HTTP_STATUS_DESCRIPTION_Bad Gateway "Bad Gateway"
#define HTTP_STATUS_CODE_503 503
#define HTTP_STATUS_DESCRIPTION_Service Unavailable "Service Unavailable"
#define HTTP_STATUS_CODE_504 504
#define HTTP_STATUS_DESCRIPTION_Gateway Timeout "Gateway Timeout"
#define HTTP_STATUS_CODE_505 505
#define HTTP_STATUS_DESCRIPTION_HTTP Version Not Supported "HTTP Version Not Supported"
#define HTTP_STATUS_CODE_506 506
#define HTTP_STATUS_DESCRIPTION_Variant Also Negotiates "Variant Also Negotiates"
#define HTTP_STATUS_CODE_507 507
#define HTTP_STATUS_DESCRIPTION_Insufficient Storage "Insufficient Storage"
#define HTTP_STATUS_CODE_508 508
#define HTTP_STATUS_DESCRIPTION_Loop Detected "Loop Detected"
// #define HTTP_STATUS_CODE_509 "509"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_CODE_510 510
#define HTTP_STATUS_DESCRIPTION_Not Extended (OBSOLETED) "Not Extended (OBSOLETED)"
#define HTTP_STATUS_CODE_511 511
#define HTTP_STATUS_DESCRIPTION_Network Authentication Required "Network Authentication Required"

#endif // __HTTP_TYPES_STATUSES__
