#ifndef BUFFERCONROLLER_H
#define BUFFERCONROLLER_H

#include"../../main.h"
#include <unistd.h>

int add_char_to_buffer(str_t *str_p, char c);
int flush_buffer(str_t *str_p);


#endif
