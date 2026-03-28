#include"main.h"

int _printf(const char *format, ...)
{
    int err;
    str_t str = {0};
    str_t *str_p = &str;
    char buffer[BUFSIZE];

    str_p->fd = 1; /*stdout*/
    str.BF_type = _IOLBF;

    if (!format)
        return -1;
    str.format = format;
    str.buffer = buffer;

    va_start(str.args, format);

    err = controller(str_p);

    va_end(str.args);
    if (err)
        return -1;

    return str.num_printed;
}
