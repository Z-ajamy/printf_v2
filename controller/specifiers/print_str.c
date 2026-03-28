#include"specifiers.h"

int print_str(str_t *str_p)
{
    char *p = NULL;
    int err = 0;

    p = va_arg(str_p->args, char *);
    err = put_str(p, str_p);
    return err;
}
