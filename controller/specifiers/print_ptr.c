#include"specifiers.h"

int print_ptr(str_t *str_p)
{
    unsigned long ul;
    int err = 0;
    void *ptr = va_arg(str_p->args, void *);
    ul = (unsigned long)ptr;

    if (!ul)
    {
        err = put_str("(nil)", str_p);
        return err;
    }
    
    err = add_char_to_buffer(str_p, '0');
    if (err)
        return err;
    
    err = add_char_to_buffer(str_p, 'x');
    if (err)
        return err;

    err = put_x(ul, str_p, 0);
    return err;
}
