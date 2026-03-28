#include <limits.h>
#include <stdio.h>
#include "../main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    
    int len;
    int len2;
    char *p = NULL;

    /*
    unsigned int ui;
    void *addr;
    */

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d, %i]\n", len, len2);

    len = _printf("Let's try%% to printf a simple sentence.\n");
    len2 = printf("Let's try%% to printf a simple sentence.\n");
    printf("Length:[%d, %i]\n", len, len2);

    len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    printf("Length:[%d, %i]\n", len, len2);
    
    len = _printf("String:[%s]\n", p);
    len2 = printf("String:[%s]\n", p);
    printf("Length:[%d, %i]\n", len, len2);

    len = _printf("num:[%d, %i]\n", -2147483648, len);
    len2 = printf("num:[%d, %i]\n", len2, len2);
    printf("Length:[%d, %i]\n", len, len2);

    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    printf("Length:[%d, %i]\n", len, len2);


    /*
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    */
    return (0);
}
