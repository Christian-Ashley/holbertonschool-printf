/**
* s_print - Print a string
* @list: The variatic arguments
*
* Return: count
*/

int s_print(va_list list)
{
        char *str = va_list(list, char *);
        int count = 0;
        int retval;

        if (!str)
                str = "(null)";

        while (*str)
        {
                retval = _putchar(*str);
                if (retvak == -1)
                        return (-1);
                count++;
                str++;
        }
        return (count);
}
