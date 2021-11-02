#include "libft.h"


int     ft_aux(const char *tmp, va_list argptr, t_flags *flags, int *count)
{
    int count2;

    count2 = -1;
    while(*tmp && ft_isflags(*tmp))
    {
        ++count2;
        if (*tmp == '0'  &&  flags->point == -1 && flags->width == 0)
            flags->zero = 1;
        if (*tmp == '-')
            flags->dash = 1;
        if (*tmp == '*' && ++count2)
            tmp+=ft_starconfig(tmp, flags, argptr);
        if (*tmp == '.' && ++count2)
            tmp+=ft_pointconfig(tmp, flags, argptr);
        if (ft_isnumber(*tmp) && (flags->point == -1))
            flags->width = flags->width * 10 + *tmp - '0';
        if (ft_istype(*tmp))
        {
            *count += ft_print(tmp, flags, argptr);
            break ;
        }
        ++tmp;
    }
    return (count2);
}

int ft_check(int count, const char *tmp, va_list argptr, t_flags *flags)
{
    while(*tmp)
    {
        ft_init_struct_flags(flags);
        if (*tmp == '%')
        {
            tmp++;
            //if(!*tmp)
              //  --count; 
            tmp+=ft_aux(tmp, argptr, flags, &count);
        }
        else if (*tmp !='%')
        {
            count+=ft_putchar(*tmp);
        }
        tmp++;
    }
    return (count);
    
}

int ft_printf(const char *str, ...)
{
    va_list argptr;
    int aux;
    t_flags flags;
    
    aux = 0;
    va_start(argptr, str);
    aux = ft_check(aux, str, argptr, &flags);
    va_end(argptr);
    return (aux);
}