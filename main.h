#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

typedef struct  str_s
{
    char *buffer;
    int buff_index;
    int num_printed;
    int num;
    int flags;
    va_list args;
    const char *format;
} str_t;

int _printf(const char *format, ...);

#include "./controller/controller.h"

#endif
