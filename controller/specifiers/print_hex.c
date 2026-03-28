#include"specifiers.h"

int print_hex(str_t *str_p)
{
    unsigned int u;
    int err = 0;

    u = va_arg(str_p->args, unsigned int);
    err = put_x(u, str_p, 0);
    return err;
}
