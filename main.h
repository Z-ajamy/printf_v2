#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

#define _IOLBF 1
#define _IONBF 2

#define BUFSIZE 1024


typedef struct  str_s
{
    int BF_type; /*Buffer type*/
    int fd; /*file descriptor*/
    int buff_index;
    int num_printed;
    char *buffer;
    const char *format; /*ptr to the input-> srt _printf(const char *format, ...)*/
    va_list args;
} str_t;

int _printf(const char *format, ...);

#include "./controller/controller.h"

#endif
