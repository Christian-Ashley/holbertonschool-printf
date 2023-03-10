#ifndef HEADER_H
#define HEADER_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct type - connects percentage character to appropriate function
 * @identifier: Speficier
 * @print: appropriate function
 */
typedef struct type
{
        char *identifier;
        int (*print)(va_list);
} type_t;

int _putchar(char c);
int (*get_function(const char *speci))(va_list);
int _printf(const char *, ...);

int c_print(va_list list);
int d_print(va_list list);
int s_print(va_list list);
int i_print(va_list list);

int countDigits(unsigned int n);
int print_number(unsigned int n);

#endif
