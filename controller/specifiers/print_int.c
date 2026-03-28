#include"specifiers.h"

int print_int(str_t *str_p)
{
    int i;
    int err = 0;
    unsigned int u = 0;

    i = va_arg(str_p->args, int);
    if (i < 0)
    {
        err = add_char_to_buffer(str_p, '-');
        if (err)
            return err;
        u = (unsigned int)(~i) + 1; /*BitWise get a positive bumber -Safe with Max Negative*/
    }
    else
        u = i;

    err = put_i(u, str_p);
    return err;
}
