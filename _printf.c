#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf -
 * @format:The initial string
 * Return: the memory with the string
 */

int _printf(const char *format, ...)
{
        int count = 0;
        va_list list;
        int (*function)(va_list) = NULL;

        va_start(list, format);

        while (*format)
        {
                if (*format == '%' && *(format + 1) != '%')
                {
                        format++;
                        function = get_function(format);

                        if (*(format) == '\0')
                                return (-1);
                        else if (function == NULL)
                        {
                                _putchar(*(format - 1));
                                _putchar(*format);
                                count += 2;
                        }
                        else
                                count += function(list);
                }
                else if (*format == '%' && *(format + 1) == '%')
                {
                        format++;
                        _putchar('%');
                        count++;
                }
                else
                {
                        _putchar(*format);
                        count++;
                }

                format++;
        }
        va_end(list);
        return (count);
}
