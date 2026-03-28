#include "buffer_controller.h"
#include "../../main.h"
int add_char_to_buffer(str_t *str_p, char c)
{
    int err = 0;
    
    if (str_p->buff_index >= BUFSIZE)
    {
        err = flush_buffer(str_p);
        if (err)
            return err;
    }

    str_p->buffer[str_p->buff_index] = c;
    str_p->buff_index++;

    if (c == '\n' && str_p->BF_type == _IOLBF)
        err = flush_buffer(str_p);
    if(err)
        return err;
    return 0;
}
