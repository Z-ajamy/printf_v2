#include"controller.h"

void get_specifiers(int (*fun_arr[])(str_t *str_p))
{
    fun_arr[37] = print_pres;
    fun_arr[99] = print_char;
    fun_arr[115] = print_str;
    fun_arr[100] = print_int;
    fun_arr[105] = print_int;
}

int controller(str_t *str_p)
{
    int err = 0;
    static int (*fun_arr[256])(str_t *str_p) = {NULL};
    static int is_init = 0;
    const char *p = str_p->format;

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
            if (fun_arr[(int)(*(p + 1))])
            {
                err = fun_arr[(int)(*(p + 1))](str_p);
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
