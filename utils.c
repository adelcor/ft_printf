/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <adel-cor@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:34:20 by adel-cor          #+#    #+#             */
/*   Updated: 2021/08/12 09:49:23 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int n, int *count, char c)
{
	unsigned int	num;

	num = (unsigned int)n;
	if (num > 15)
	{
		ft_puthexa(num / 16, count, c);
		num = num % 16;
	}
	if (num < 10)
		ft_putchar((num + 48), count);
	else
	{
		if (c == 'X')
			ft_putchar((num + 55), count);
		else
			ft_putchar((num + 87), count);
	}
}

void	ft_stockton(char s, va_list arg, int *count)
{
	if (s == 's')
		ft_putstr(va_arg(arg, char *), count);
	if (s == 'c')
		ft_putchar(va_arg(arg, int), count);
	if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(arg, int), count);
	if (s == 'u')
		ft_putunbr(va_arg(arg, unsigned int), count);
	if (s == 'x' || s == 'X')
		ft_puthexa(va_arg(arg, unsigned int), count, s);
	if (s == 'p')
	{
		*count += ft_printf("0x");
		ft_puthexap(va_arg(arg, unsigned long long), count);
	}
}

void	ft_task(const char *str, va_list arg, int *count)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				write(1, &str[i + 1], 1);
				*count += 1;
			}
			else
				ft_stockton(str[i + 1], arg, count);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			*count += 1;
		}
		i++;
	}
}
