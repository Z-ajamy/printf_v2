#include"specifiers.h"

int print_str(str_t *str_p)
{
    char *p = NULL;
    int err = 0;

    p = va_arg(str_p->args, char *);
    if (!p)
        p = "(null)";
    
    while (*p)
    {
        err = add_char_to_buffer(str_p, *p);
        p = p + 1;
        if (err)
            return err;
    }
    return 0;
}
