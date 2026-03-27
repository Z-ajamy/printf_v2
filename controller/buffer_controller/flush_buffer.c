#include"buffer_controller.h"

int flush_buffer(str_t *str_p)
{
    int n;

    n = write(1, str_p->buffer, str_p->buff_index);
    if (n < 0)
        return 1;
    str_p->num_printed += n;
    str_p->buff_index = 0;

    return 0;
}
