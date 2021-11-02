#include "libft.h"

char     *ft_set_precision(char *s, t_flags *flag)
{
    int count;

    count = 0;
    while(count < ft_strlen(s) && count < flag->point)
        count++;
    s[count] = '\0';
    return (s);
}

char    ft_set_dash(t_flags *flag, char *s, int space)
{
    int count;
    
    count = 0;
    if (!flag->dash)
        while (count < space)
            count+=ft_putchar(' ');
    count+=ft_putstr(s);
    if (flag->dash)
        while (count < space + ft_strlen(s))
            count+= ft_putchar(' ');
    return (count);
}
char    ft_set_zero(t_flags *flag, char *s, int space)
{
    int count;
    count = 0;
    if (!flag->dash)
        while (count < space)
            count+=ft_putchar('0');
    count+=ft_putstr(s);
    if (flag->dash)
        while (count < space + ft_strlen(s))
            count+= ft_putchar('0');
    return (count);
}