#ifndef SPECIFIERS_H
#define SPECIFIERS_H

#include "../../main.h"
#include "../buffer_controller/buffer_controller.h"
#include "./helpers/helpers.h"

int print_pres(str_t *str_p);
int print_char(str_t *str_p);
int print_str(str_t *str_p);
int print_int(str_t *str_p);
int print_bool(str_t *str_p);
int print_unsigned(str_t *str_p);
int print_oct(str_t *str_p);
int print_hex(str_t *str_p);
int print_HEX(str_t *str_p);
int print_Str(str_t *str_p);
int print_ptr(str_t *str_p);

#endif
