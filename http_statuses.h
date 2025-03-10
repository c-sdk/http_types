#ifndef __HTTP_TYPES_STATUSES__
#define __HTTP_TYPES_STATUSES__ 1

#define HTTP_STATUS_100 100
#define HTTP_STATUS_DESCRIPTION_Continue "Continue"
#define HTTP_STATUS_101 101
#define HTTP_STATUS_DESCRIPTION_Switching_Protocols "Switching Protocols"
#define HTTP_STATUS_102 102
#define HTTP_STATUS_DESCRIPTION_Processing "Processing"
#define HTTP_STATUS_103 103
#define HTTP_STATUS_DESCRIPTION_Early_Hints "Early Hints"
// #define HTTP_STATUS_104 "104"
// #define HTTP_STATUS_DESCRIPTION_"Upload_Resumption_Supported_(TEMPORARY___registered_2024_11_13,_expires_2025_11_13)" ""Upload Resumption Supported (TEMPORARY - registered 2024-11-13, expires 2025-11-13)""
// #define HTTP_STATUS_105-199 "105-199"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_200 200
#define HTTP_STATUS_DESCRIPTION_OK "OK"
#define HTTP_STATUS_201 201
#define HTTP_STATUS_DESCRIPTION_Created "Created"
#define HTTP_STATUS_202 202
#define HTTP_STATUS_DESCRIPTION_Accepted "Accepted"
#define HTTP_STATUS_203 203
#define HTTP_STATUS_DESCRIPTION_Non_Authoritative_Information "Non-Authoritative Information"
#define HTTP_STATUS_204 204
#define HTTP_STATUS_DESCRIPTION_No_Content "No Content"
#define HTTP_STATUS_205 205
#define HTTP_STATUS_DESCRIPTION_Reset_Content "Reset Content"
#define HTTP_STATUS_206 206
#define HTTP_STATUS_DESCRIPTION_Partial_Content "Partial Content"
#define HTTP_STATUS_207 207
#define HTTP_STATUS_DESCRIPTION_Multi_Status "Multi-Status"
#define HTTP_STATUS_208 208
#define HTTP_STATUS_DESCRIPTION_Already_Reported "Already Reported"
// #define HTTP_STATUS_209-225 "209-225"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_226 226
#define HTTP_STATUS_DESCRIPTION_IM_Used "IM Used"
// #define HTTP_STATUS_227-299 "227-299"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_300 300
#define HTTP_STATUS_DESCRIPTION_Multiple_Choices "Multiple Choices"
#define HTTP_STATUS_301 301
#define HTTP_STATUS_DESCRIPTION_Moved_Permanently "Moved Permanently"
#define HTTP_STATUS_302 302
#define HTTP_STATUS_DESCRIPTION_Found "Found"
#define HTTP_STATUS_303 303
#define HTTP_STATUS_DESCRIPTION_See_Other "See Other"
#define HTTP_STATUS_304 304
#define HTTP_STATUS_DESCRIPTION_Not_Modified "Not Modified"
#define HTTP_STATUS_305 305
#define HTTP_STATUS_DESCRIPTION_Use_Proxy "Use Proxy"
// #define HTTP_STATUS_306 "306"
// #define HTTP_STATUS_DESCRIPTION_(Unused) "(Unused)"
#define HTTP_STATUS_307 307
#define HTTP_STATUS_DESCRIPTION_Temporary_Redirect "Temporary Redirect"
#define HTTP_STATUS_308 308
#define HTTP_STATUS_DESCRIPTION_Permanent_Redirect "Permanent Redirect"
// #define HTTP_STATUS_309-399 "309-399"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_400 400
#define HTTP_STATUS_DESCRIPTION_Bad_Request "Bad Request"
#define HTTP_STATUS_401 401
#define HTTP_STATUS_DESCRIPTION_Unauthorized "Unauthorized"
#define HTTP_STATUS_402 402
#define HTTP_STATUS_DESCRIPTION_Payment_Required "Payment Required"
#define HTTP_STATUS_403 403
#define HTTP_STATUS_DESCRIPTION_Forbidden "Forbidden"
#define HTTP_STATUS_404 404
#define HTTP_STATUS_DESCRIPTION_Not_Found "Not Found"
#define HTTP_STATUS_405 405
#define HTTP_STATUS_DESCRIPTION_Method_Not_Allowed "Method Not Allowed"
#define HTTP_STATUS_406 406
#define HTTP_STATUS_DESCRIPTION_Not_Acceptable "Not Acceptable"
#define HTTP_STATUS_407 407
#define HTTP_STATUS_DESCRIPTION_Proxy_Authentication_Required "Proxy Authentication Required"
#define HTTP_STATUS_408 408
#define HTTP_STATUS_DESCRIPTION_Request_Timeout "Request Timeout"
#define HTTP_STATUS_409 409
#define HTTP_STATUS_DESCRIPTION_Conflict "Conflict"
#define HTTP_STATUS_410 410
#define HTTP_STATUS_DESCRIPTION_Gone "Gone"
#define HTTP_STATUS_411 411
#define HTTP_STATUS_DESCRIPTION_Length_Required "Length Required"
#define HTTP_STATUS_412 412
#define HTTP_STATUS_DESCRIPTION_Precondition_Failed "Precondition Failed"
#define HTTP_STATUS_413 413
#define HTTP_STATUS_DESCRIPTION_Content_Too_Large "Content Too Large"
#define HTTP_STATUS_414 414
#define HTTP_STATUS_DESCRIPTION_URI_Too_Long "URI Too Long"
#define HTTP_STATUS_415 415
#define HTTP_STATUS_DESCRIPTION_Unsupported_Media_Type "Unsupported Media Type"
#define HTTP_STATUS_416 416
#define HTTP_STATUS_DESCRIPTION_Range_Not_Satisfiable "Range Not Satisfiable"
#define HTTP_STATUS_417 417
#define HTTP_STATUS_DESCRIPTION_Expectation_Failed "Expectation Failed"
// #define HTTP_STATUS_418 "418"
// #define HTTP_STATUS_DESCRIPTION_(Unused) "(Unused)"
// #define HTTP_STATUS_419-420 "419-420"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_421 421
#define HTTP_STATUS_DESCRIPTION_Misdirected_Request "Misdirected Request"
#define HTTP_STATUS_422 422
#define HTTP_STATUS_DESCRIPTION_Unprocessable_Content "Unprocessable Content"
#define HTTP_STATUS_423 423
#define HTTP_STATUS_DESCRIPTION_Locked "Locked"
#define HTTP_STATUS_424 424
#define HTTP_STATUS_DESCRIPTION_Failed_Dependency "Failed Dependency"
#define HTTP_STATUS_425 425
#define HTTP_STATUS_DESCRIPTION_Too_Early "Too Early"
#define HTTP_STATUS_426 426
#define HTTP_STATUS_DESCRIPTION_Upgrade_Required "Upgrade Required"
// #define HTTP_STATUS_427 "427"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_428 428
#define HTTP_STATUS_DESCRIPTION_Precondition_Required "Precondition Required"
#define HTTP_STATUS_429 429
#define HTTP_STATUS_DESCRIPTION_Too_Many_Requests "Too Many Requests"
// #define HTTP_STATUS_430 "430"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_431 431
#define HTTP_STATUS_DESCRIPTION_Request_Header_Fields_Too_Large "Request Header Fields Too Large"
// #define HTTP_STATUS_432-450 "432-450"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_451 451
#define HTTP_STATUS_DESCRIPTION_Unavailable_For_Legal_Reasons "Unavailable For Legal Reasons"
// #define HTTP_STATUS_452-499 "452-499"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
#define HTTP_STATUS_500 500
#define HTTP_STATUS_DESCRIPTION_Internal_Server_Error "Internal Server Error"
#define HTTP_STATUS_501 501
#define HTTP_STATUS_DESCRIPTION_Not_Implemented "Not Implemented"
#define HTTP_STATUS_502 502
#define HTTP_STATUS_DESCRIPTION_Bad_Gateway "Bad Gateway"
#define HTTP_STATUS_503 503
#define HTTP_STATUS_DESCRIPTION_Service_Unavailable "Service Unavailable"
#define HTTP_STATUS_504 504
#define HTTP_STATUS_DESCRIPTION_Gateway_Timeout "Gateway Timeout"
#define HTTP_STATUS_505 505
#define HTTP_STATUS_DESCRIPTION_HTTP_Version_Not_Supported "HTTP Version Not Supported"
#define HTTP_STATUS_506 506
#define HTTP_STATUS_DESCRIPTION_Variant_Also_Negotiates "Variant Also Negotiates"
#define HTTP_STATUS_507 507
#define HTTP_STATUS_DESCRIPTION_Insufficient_Storage "Insufficient Storage"
#define HTTP_STATUS_508 508
#define HTTP_STATUS_DESCRIPTION_Loop_Detected "Loop Detected"
// #define HTTP_STATUS_509 "509"
// #define HTTP_STATUS_DESCRIPTION_Unassigned "Unassigned"
// #define HTTP_STATUS_510 "510"
// #define HTTP_STATUS_DESCRIPTION_Not_Extended_(OBSOLETED) "Not Extended (OBSOLETED)"
#define HTTP_STATUS_511 511
#define HTTP_STATUS_DESCRIPTION_Network_Authentication_Required "Network Authentication Required"

#endif // __HTTP_TYPES_STATUSES__
