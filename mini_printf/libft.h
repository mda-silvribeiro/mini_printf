#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h> 

typedef struct	s_flags
{
	int		zero;
	int		dash;
	int		width;
	int		star;
	int		point;
	int		type;
}				t_flags;

// libft.c
int     ft_strlen(const char *str);
int     ft_putchar(int c);
int		ft_bspace(int n);
int     ft_putstr(char *str);
char    *ft_dup(const char *str);
char	*ft_itoa(int n);
void	ft_signal(int number, char *result);

// ft_printf
int		ft_init_struct_flags(t_flags *flags);
int     ft_istype(char c);
int     ft_isnumber(int n);
int     ft_isformat(char f);
int     ft_isflags(int c);

// ft_config
int		ft_init_struct_flags(t_flags *flags);
int     ft_starconfig(const char *tmp, t_flags *flag, va_list argptr);
int     ft_pointconfig(const char *tmp, t_flags *flag, va_list argptr);

// ft_print 
int     ft_char(va_list argptr, t_flags *flag);
int     ft_string(va_list argptr, t_flags *flag);
int     ft_print(const char *tmp, t_flags *flag, va_list argptr);

// ft_set
char    ft_set_dash(t_flags *flag, char *s, int space);
char     *ft_set_precision(char *s, t_flags *flag);

// idk
int     ft_aux(const char *tmp, va_list argptr, t_flags *flags, int *count);
int ft_check(int count, const char *tmp, va_list argptr, t_flags *flags);
int ft_printf(const char *str, ...);

#endif