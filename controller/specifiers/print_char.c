#include"specifiers.h"

int print_char(str_t *str_p)
{
    char c;
    int err = 0;

    c = va_arg(str_p->args, int);
    err = add_char_to_buffer(str_p, c);
    return err;
}
