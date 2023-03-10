#include "main.c"
  
/**
 * get_function - Find which function should be run based on identifier
 * @speci: Character that identifies
 * Return: pointer to runnning funciton.
 */

int (*get_function(const char *speci))(va_list)
{
        int i;

        type_t types[] = {
                {"s", s_print},
                {"c", c_print},
                {"d", d_print},
                {"i", i_print},
                {NULL, NULL}
        };

        for (i = 0; types[i].identifier; i++)
        {
                if (*specifier == types[i].identifier[]0)
                        return (types[i].print);
        }
        return (NULL);
}
