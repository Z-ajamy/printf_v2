#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

#define _IOLBF 1
#define _IONBF 2

#define BUFSIZE 1024


typedef struct  str_s
{
    char *buffer;
    int buff_index;
    int num_printed;
    int num;
    int flags;
    va_list args;
    const char *format;
    int BF_type;
    int fd;
} str_t;

int _printf(const char *format, ...);

#include "./controller/controller.h"

#endif
