#include "libft.h"

int		ft_init_struct_flags(t_flags *flags)
{
	flags->zero = 0;
	flags->dash = 0;
	flags->point = -1;
	flags->star = 0;
	flags->width = 0;
	flags->type = 0;
	return (1);
}

int     ft_starconfig(const char *tmp, t_flags *flag, va_list argptr)
{
    int number;

    number = va_arg(argptr, int);
    if ( *tmp == '*' && flag->zero && flag->width == 0 && flag->point == -1)
    {
        flag->width = number;
        flag->star = 1;
    }
    else if (*tmp == '*' && flag->width == 0 && flag->point == -1)
    {
        if (((number < 0) && (number *= -1)))
            flag->dash = 1;
        flag->star = 1;
        flag->width = number;
    }
    if (*tmp == '*' && flag->point == 0 && flag->width != 0)
    {
        if ((number  < 0 && (number *= -1)))
            flag->dash = 1;

        flag->star = 1;
        flag->point = number;
    }
    return (1);
}

int     ft_pointconfig(const char *tmp, t_flags *flag, va_list argptr)
{
    int digit;

    tmp++;
    digit = 0;
    flag->point = 0;
    if (*tmp == '*')
        flag->point = va_arg(argptr, int);
    else
        while (ft_isnumber(*tmp))
        {
            flag->point = flag->point * 10 + *tmp - '0';
            digit = 1;
            ++tmp;
        }
    if ( flag->point == -1 && digit == 0)
        flag->point = 0;
    int i;
    i = flag->point;
    return (1);

}