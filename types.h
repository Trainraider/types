// SPDX-License-Identifier: GPL-2.0-only

#include <inttypes.h>
#include <stdlib.h>

#define ALIAS
#define BORROW
#define TAKE
#define RETURN

#define U unsigned
#define C const
#define S static
#define R restrict

typedef C int     I;
typedef C int8_t  I8;
typedef C int16_t I16;
typedef C int32_t I32;
typedef C int64_t I64;
typedef C size_t  SZ;

typedef int     IM;
typedef int8_t  I8M;
typedef int16_t I16M;
typedef int32_t I32M;
typedef int64_t I64M;
typedef size_t  SZM;

typedef C U int    IU;
typedef C uint8_t  UI8;
typedef C uint16_t UI16;
typedef C uint32_t UI32;
typedef C uint64_t UI64;

typedef U int    UIM;
typedef uint8_t  UI8M;
typedef uint16_t UI16M;
typedef uint32_t UI32M;
typedef uint64_t UI64M;

typedef C char   CH;
typedef char     CHM;
typedef C U char UCH;
typedef U char   UCHM;

typedef C void V;
typedef void   VM;
