/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.0.0.13) *
 *******************************************************************/
#ifndef __wrappedcurlTYPES_H_
#define __wrappedcurlTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef uint64_t (*uFpup_t)(void*, uint64_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(curl_easy_setopt, uFpup_t)

#endif // __wrappedcurlTYPES_H_
