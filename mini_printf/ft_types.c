#include "libft.h"

int ft_istype(char c)
{
    char *flags = "cspdiuxX%%";
    while (c != *flags && *flags)
        flags++;
    if (c == *flags)
        return (1);
    return (0);
}

int    ft_isnumber(int n)
{
    if (n >= '0' && n <= '9')
        return (1);
    return (0);
}   

int     ft_isformat(char f)
{
    if (f == '-' || f == '0' || f == '.' || f == '*')
        return (1);
    return (0);
}

int     ft_isflags(int c)
{
    if ((ft_istype(c) || ft_isnumber(c) || ft_isformat (c)))
        return (1);
    return (0);
}