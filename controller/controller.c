#include"controller.h"

void get_specifiers(int (*fun_arr[])(str_t *str_p))
{
    fun_arr[(int)'%'] = print_pres;
    fun_arr[(int)'c'] = print_char;
    fun_arr[(int)'s'] = print_str;
    fun_arr[(int)'d'] = print_int;
    fun_arr[(int)'i'] = print_int;
    fun_arr[(int)'b'] = print_bool;
    fun_arr[(int)'u'] = print_unsigned;
}

int controller(str_t *str_p)
{
    int err = 0;
    static int (*fun_arr[256])(str_t *str_p) = {NULL};
    static int is_init = 0;
    const char *p = str_p->format;
    unsigned char next_char;

    if (!is_init)
    {
            get_specifiers(fun_arr);
            is_init = 1;
    }
    
    
    while (*p)
    {
        if (*p == '%')
        {
            if (*(p + 1) == '\0')
            {
                if (str_p->buff_index > 0)
                    flush_buffer(str_p);
                return -1;
            }
            next_char = (unsigned char)(*(p + 1));
            if (fun_arr[next_char])
            {
                err = fun_arr[next_char](str_p);
                p++;
            }
            else
            {
                err = add_char_to_buffer(str_p, '%');
                if (!err)
                    err = add_char_to_buffer(str_p, *(p + 1));
                p++;
            }
        }

        else
            err = add_char_to_buffer(str_p, *p);

        if (err)
            return err;
        p = p + 1;
    }
    if (str_p->buff_index)
    {
        err = flush_buffer(str_p);
    }
    return err;
}
