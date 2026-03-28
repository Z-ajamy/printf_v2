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
    char *p = "Hi\n";
    char *P = "Best\nSchool";
    unsigned int ui;
    void *addr;
    

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

    len = _printf("num:[%d, %i]\n", len, len);
    len2 = printf("num:[%d, %i]\n", len2, len2);
    printf("Length:[%d, %i]\n", len, len2);

    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    printf("Length:[%d, %i]\n", len, len2);

    len = _printf("%b\n", 98);
    printf("Length:[%d]\n", len);

    ui = (unsigned int)INT_MAX + 1024;
    len = _printf("Unsigned:[%u]\n", ui);
    len2 = printf("Unsigned:[%u]\n", ui);
    printf("Length:[%d, %i]\n", len, len2);

    
    len = _printf("Unsigned octal:[%o]\n", ui);
    len2 = printf("Unsigned octal:[%o]\n", ui);
    printf("Length:[%d, %i]\n", len, len2);

    len = _printf("Unsigned hexadecimal:[%x]\n", ui);
    len2 = printf("Unsigned hexadecimal:[%x]\n", ui);
    printf("Length:[%d, %i]\n", len, len2);


    
    len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Length:[%d, %i]\n", len, len2);

    
    len = _printf("String:[%S]\n", P);
    printf("Length:[%d]\n", len);

    addr = (void *)0x7ffe637541f0;
    len = printf("Address:[%p]\n", addr);
    len2 = _printf("Address:[%p]\n", addr);
    printf("Length:[%d, %i]\n", len, len2);

    /*
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Address:[%p]\n", addr);
    */
    return (0);
}
