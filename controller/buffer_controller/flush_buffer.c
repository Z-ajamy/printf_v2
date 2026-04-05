#include"buffer_controller.h"

int flush_buffer(str_t *str_p)
{
    int written;
    int total_written = 0;
    int to_write = str_p->buff_index;

    if (!str_p->buff_index) /*No data to print*/
        return 0;

    while (total_written < to_write)
    {
        written = write(str_p->fd, str_p->buffer + total_written, to_write - total_written);
        if (written < 0)
            return -1;
        total_written += written;
    }

    str_p->num_printed += total_written;
    str_p->buff_index = 0;

    return 0;
}
