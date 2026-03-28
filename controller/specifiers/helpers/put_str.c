#include "helpers.h"

int put_str(const char *p, str_t *str_p)
{
    int err = 0;
    unsigned char c;
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
