#include "ft_printf.h"

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}

void	ft_putstr(char *str, int *count)
{
	int i;
	i = 0;

	if(!str)
	{
		*count += ft_printf("(null)");
		return ;
	}	   

	while(str[i] != '\0')
	{
		ft_putchar(str[i], count);
		i++;
	}
}

void ft_putnbr(int n, int *count)
{
	unsigned int num;
	num = 0;

	if( n < 0)
	{
		ft_putchar('-', count);
		num = (unsigned int)(n * -1);
	}
	else
	{
		num = (unsigned int) n;
	}
	if (num >= 10)
		ft_putnbr(num / 10, count);
	ft_putchar((num % 10) + '0', count);
}
void ft_putunbr(unsigned int n, int *count)
{
	unsigned int num;
	
	num = n;
	if (num >= 10)
		ft_putunbr(num / 10, count);
	ft_putchar((num % 10) + '0', count);
}

void ft_puthexap(unsigned long long n, int *count)
{
	unsigned	long long num;

	num = (unsigned long long)n;
    if(num > 15)
    {
        ft_puthexap(num / 16, count);
        num = num % 16;
    }
    if( num < 10)
        ft_putchar((num + 48), count);
    else
		ft_putchar((num + 87), count);
    
}
