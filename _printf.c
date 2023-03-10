#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf -
 * @format:The initial string
 * Return: the memory with the string
 */

_printf(const char *format, ...)
{
        int count = 0;
        int sc = 0;
        va_list list;
        int (*function)(va_list) = NULL;

        va_start(list, format);

        while (format[sc] != '\0')
        {
                if (format[sc] == '%' && format[sc++] != '%')
                {
                        sc++;
                        function = get_function(format[sc]);

                        if (format[sc] == '\0')
                                return (-1);
                        else if (function == NULL)
                        {
                                _putchar(format[sc--]);
                                _putchar(format[sc]);
                                count += 2;
                        }
                        else
                                count += function(list);
                }
                else if (format[sc] == '%' && format[sc++] == '%')
                {
                        sc++;
                        _putchar('%');
                        count++;
                }
                else
                {
                        _putchar(format[sc]);
                        count++;
                }

                sc++;
        }
        va_end(list);
        return (count);
}
