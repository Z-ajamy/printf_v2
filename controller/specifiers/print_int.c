#include"specifiers.h"
int put_i(unsigned x, str_t *str_p);

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
        u = -i;
    }
    else
        u = i;

    err = put_i(u, str_p);
    return err;
}

int put_i(unsigned x, str_t *str_p)
{
    int err = 0;

    if (x >= 10)
    {
        err = put_i(x / 10, str_p);
        if (err)
                return err;
    }

    err = add_char_to_buffer(str_p, (x % 10) + '0');
    return err;
}
