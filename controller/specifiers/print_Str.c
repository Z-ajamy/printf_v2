#include"specifiers.h"

int print_Str(str_t *str_p)
{
    char *p = NULL;
    int err = 0;
    unsigned char c;

    p = va_arg(str_p->args, char *);
    if (!p)
        p = "(null)";
    
    while (*p)
    {
        c = (unsigned char)*p;
        if ((c < 32) || (c >= 127))
        {
            err = add_char_to_buffer(str_p, '\\');
            if (err)
                return err;
            err = add_char_to_buffer(str_p, 'x');
            if (err)
                return err;
            if (c < 16)
            {
                err = add_char_to_buffer(str_p, '0');
                if (err)
                    return err;
            }

            err = put_x(c, str_p, 1);
            if (err)
                return err;
        }
        else
        {
            err = add_char_to_buffer(str_p, *p);
            if (err)
                return err;
        }
            
        p = p + 1;
    }
    return 0;
}
