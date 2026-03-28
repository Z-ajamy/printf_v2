#include"specifiers.h"

int print_bool(str_t *str_p)
{
    unsigned int u;
    unsigned int itr = 0x80000000; /*1000..00*/
    int i, err = 0;
    int flag = 0;
    int x = 0;

    u = va_arg(str_p->args, unsigned int);
    if (u == 0)
    {
        err = add_char_to_buffer(str_p, '0');
        return err;
    }

    for (i = 0; i < 32; i++)
    {
        x = (itr >> i) & u;
        if (x)
        {
            flag = 1;
        }
        if (flag)
        {
            if (x)
                err = add_char_to_buffer(str_p, '1');
            else
                err = add_char_to_buffer(str_p, '0');
            if (err)
            {
                return err;
            }
        }
    }
    return err;
}
