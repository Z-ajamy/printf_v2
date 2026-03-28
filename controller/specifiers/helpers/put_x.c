#include "helpers.h"

int put_x(unsigned long x, str_t *str_p, int is_upper)
{
	int err = 0;
	char *h = "0123456789abcdef";
	char c;

	if (x >= 16)
	{
		err = put_x(x / 16, str_p, is_upper);
		if (err)
			return (err);
	}

	c = h[x % 16];

	if (is_upper && c >= 'a' && c <= 'f')
	{
		c -= 32;
	}

	err = add_char_to_buffer(str_p, c);
	return (err);
}
