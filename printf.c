#include"main.h"

int _printf(const char *format, ...)
{
    int err;
    str_t str = {0};
    str_t *str_p = &str;
    char *buffer;
    va_list args;

    if (!format)
        return -1;
    str.format = format;

    buffer = (char *)malloc(sizeof(char) * 1024);
    if (!buffer)
        return -1;
    str.buffer = buffer;

    va_start(args, format);
    str.args_ptr = &args;

    err = controller(str_p);

    if(buffer)
    {
        free(buffer);
        buffer = NULL;
        str.buffer = NULL;
    }
    va_end(args);
    str.args_ptr = NULL;
    if (err)
        return -1;

    return str.num_printed;
}
