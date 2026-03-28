#include "helpers.h"

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

