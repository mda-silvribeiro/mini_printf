#include "libft.h"

int     ft_percentage(const char *s, va_list argptr, t_flags *flag)
{
    int count;
    int c;

    count = 0;
    if (!flag->dash)
    {
        if (flag->width)
            while(count < flag->width - 1)
                count+=ft_putchar(' ');
        count+=ft_putchar(*s);
    }
    if (flag->zero)
        while(count < flag->width)
            count+= ft_putchar('0');
    if (flag->dash)
    {
        count+=ft_putchar(*s);
         if (flag->width)
            while(count < flag->width - 1)
                count+=ft_putchar(' ');
    }
    count += ft_putchar('*s');
    return (count);
}

int     ft_print(const char *tmp, t_flags *flag, va_list argptr)
{
    int count;

    count = 0;
    flag->type = *tmp;
    if (*tmp == 'c')
        count += ft_char(argptr, flag);
    else if (*tmp == 's')
        count += ft_string(argptr, flag);
    else if (*tmp == '%')
        count += ft_percentage(tmp, argptr, flag);
    else if (*tmp == 'i')
        count += ft_interger(tmp, argptr, flag);
    return (count);

}

int     ft_char(va_list argptr, t_flags *flag)
{
    int count;
    bool t;

    
    t = true;
    count = 0;
    if (flag->width && flag->dash)
    {
        count++;
        ft_putchar(va_arg(argptr, int));
        while(count < flag->width)
            count+=ft_putchar(' ');
        t = false;
    }
    if (t)
        while(count < flag->width - 1)
            count+=ft_putchar(' ');
    if (t)
        count+=ft_putchar(va_arg(argptr, int));
    return(count);
}

int     ft_string(va_list argptr, t_flags *flag)
{
    int count;
    char *s;
    int test ;
    count = 0;
    test = flag->point;
    if (flag->point == 0)
        return (ft_set_dash(flag, "", flag->width));
    if (!(s = ft_dup(va_arg(argptr, char *))))
        s = ft_dup("(null)");
    test = flag->point;
    if (flag->point > 0)
        s = ft_set_precision(s, flag);
    if (flag->width - ft_strlen(s) >= 0)
        count += ft_set_dash(flag, s, (flag->width - ft_strlen(s)));
    if (!flag->width || flag->width < ft_strlen(s))
        count += ft_putstr(s);
    free(s);
    return (count);
}