#include "helpers.h"

int put_o(unsigned x, str_t *str_p)
{
    int err = 0;

    if (x >= 8)
    {
        err = put_o(x / 8, str_p);
        if (err)
                return err;
    }

    err = add_char_to_buffer(str_p, (x % 8) + '0');
    return err;
}

