#include "libft.h"

int     ft_strlen(const char *str)
{
    int count;

    count = 0;
    while (str[count])
        count++;
    return (count);
}

int ft_bzero(int n)
{
	int count;

	count = 0;
	while(n > count)
		count += ft_putchar('0');
	return (count);
}

int ft_bspace(int n)
{
	int count;

	count = 0;
	while(n > count)
		count += ft_putchar(' ');
	return (count);
}

int		ft_intlen(long n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0 && len == 0)
		n = n * (-1);
	while (n >= 1 && len++ >= 0)
		n /= 10;
	return (len);
}

int     ft_putchar(int c) 
{
    write(1, &c, 1);
    return (1);
}

int     ft_putstr(char *str)
{
    int count;

    count = 0;
    if (!str)
		return (0);
	  //write(1, "(null)", 8);
    while (str[count])
    {
        ft_putchar(str[count]);
        count++;
    }
    return (count);
}

char    *ft_dup(const char *str)
{
    int count;
    char *dest;

    count = 0;
    if (!str)
        return (0);
    if (!(dest = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
        return (0);
    while (str[count])
    {
        dest[count] = str[count];
        count++;
    }
    dest[count] = '\0';
   
    return (dest);
}

void	ft_signal(int number, char *result)
{
	if (number == 0)
		result[0] = '0';
	else if (number < 0)
		result[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	aux;
	long	count;

	count = n < 1 ? 1 : 0;
	aux = count < 0 ? -(long)n : (long)n;
	while (aux)
	{
		aux /= 10;
		count++;
	}
	if (!(ptr = (char *)malloc(sizeof(char) * (count + 1))))
		return (0);
	ptr[count] = '\0';
	aux = n < 0 ? -(long)n : (long)n;
	while (count >= 0)
	{
		ptr[count - 1] = aux % 10 + '0';
		aux /= 10;
		count--;
	}
	ft_signal(n, ptr);
	return (ptr);
}