#include "libft.h"

int     ft_isnegative(const char *numbers, t_flags *flag, int i)
{
    int count;

    count = 0;
    if (i < 0 && !flag->zero)
    {
        free(numbers);
        i *= -1;
        count+=ft_putchar('-');
        numbers = ft_itoa(i);
    }
    else if (i < 0 && flag->zero)
    {
        free(numbers);
        if (flag->zero && i < 0)
            flag->width-=1;
        i *= -1;
        count+=ft_putchar('-');
        numbers = ft_itoa(i);
    }
    return (count);
}
int    ft_check_intwidth(const char *numbers, t_flags *flag, int i)
{
    int count;

    count = 0;
    if (flag->point <= flag->width && flag->point >=0)
    {
        if (i < 0)
            flag->width-=1;
        if (!flag->dash)
            count += ft_bspace(flag->width - flag->point);
        count += ft_isnegative(numbers, flag, i);
        count += ft_bzero(flag->point - ft_strlen(numbers));
        free(numbers);
        count += ft_putstr(numbers = ft_set_precision(numbers, flag));
        if (flag->dash)
            count += ft_bspace(flag->width - flag->point);
        return (count);
    }
    if (flag->zero == 1 && i < 0)
      count += ft_isnegative(numbers, flag, i);
    if (!flag->zero)
        count += ft_set_dash(flag, numbers, (flag->width - ft_strlen(numbers)));
    else
        count += ft_set_zero(flag, numbers, (flag->width - ft_strlen(numbers)));
    return (count);
}
int     ft_interger(const char *tmp, va_list argptr, t_flags *flag)
{
    int i;
    char *numbers;
    int count;

    count = 0;
    i = va_arg(argptr, int);
    numbers = ft_itoa(i);
    if (flag->width >= ft_strlen(numbers) && flag->width)
    {   
        count += ft_check_intwidth(numbers, flag, i);
        return (count);
    }
    else if (flag->point >= ft_strlen(numbers) && flag->point)
    {
        count += ft_isnegative(numbers, flag, i);
        count += ft_bzero(flag->point - ft_strlen(numbers));
    }
    if (!flag->point == 0)
    {
        if (flag->width < 0 && (flag->width *= -1))
            flag->dash = 1;
        count += ft_set_dash(flag, numbers, (flag->width - ft_strlen(numbers)));
    }
    free(numbers);
    return (count);
}