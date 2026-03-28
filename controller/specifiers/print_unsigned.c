#include"specifiers.h"

int print_unsigned(str_t *str_p)
{
    unsigned int u;
    int err = 0;

    u = va_arg(str_p->args, unsigned int);
    err = put_i(u, str_p);
    return err;
}
