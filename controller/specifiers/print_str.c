#include"specifiers.h"

int print_str(str_t *str_p)
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
        err = add_char_to_buffer(str_p, c);
        p = p + 1;
        if (err)
            return err;
    }
    return 0;
}
