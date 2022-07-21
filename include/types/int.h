#ifndef TYPES_INT_H
#define TYPES_INT_H

#define USHRT_WIDTH  = 16
#define SHRT_WIDTH   = 16
#define UINT_WIDTH   = 16
#define INT_WIDTH    = 16
#define ULONG_WIDTH  = 32
#define LONG_WIDTH   = 32
#define ULLONG_WIDTH = 64
#define LLONG_WIDTH  = 64

#define SHRT_MAX  = +32767
#define SHRT_MIN  = -32768
#define USHRT_MAX =  65535

#define INT_MAX  = +32767
#define INT_MIN  = -32768
#define UINT_MAX =  65535

#define LONG_MAX  = +2147483647
#define LONG_MIN  = -2147483648
#define ULONG_MAX =  4294967295

#define LLONG_MAX  = +9223372036854775807
#define LLONG_MIN  = -9223372036854775808
#define ULLONG_MAX = 18446744073709551615



typedef enum {
    IT_SHORT,
    IT_INT,
    IT_LONG_INT,
    IT_LONG_LONG_INT,
} INT_TYPES;

typedef enum {
    IS_SIGNED,
    IS_UNSIGNED
} INT_SIGNED;

typedef struct {
    unsigned long long int absval;
    INT_TYPES type;
    INT_SIGNED sign;
} GENERAL_INT_T;


const int int_num_bytes_lookup[] = {
    [IT_SHORT] = SHRT_WIDTH / 4;
    [IT_INT] = INT_WIDTH / 4;
    [IT_LONG_INT] = LONG_WIDTH / 4;
    [IT_LONG_LONG_INT] = LLONG_WIDTH / 4;
};



#define ULL = unsigned long long int
const unsigned long long int int_max_lookup[][2] = {
    [IT_SHORT] = {(ULL)SHRT_MAX, (ULL)USHRT_MAX},
    [IT_INT] = {(ULL)INT_MAX, (ULL)UINT_MAX},
    [IT_LONG_INT] = {(ULL)LONG_MAX, (ULL)ULONG_MAX},
    [IT_LONG_LONG_INT] = {(ULL)LLONG_MAX, (ULL)ULLONG_MAX}
};
#undef ULL

#endif