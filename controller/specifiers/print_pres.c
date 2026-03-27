#include"specifiers.h"

int print_pres(str_t *str_p)
{
    int err = 0;
    err = add_char_to_buffer(str_p, '%');
    return err;
}
