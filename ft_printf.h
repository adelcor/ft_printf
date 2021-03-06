/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <adel-cor@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:56:50 by adel-cor          #+#    #+#             */
/*   Updated: 2021/08/11 19:59:50 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_stockton(char s, va_list arg, int *count);
void	ft_task(const char *str, va_list arg, int *count);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putunbr(unsigned int n, int *count);
void	ft_puthexap(unsigned long long	n, int *count);
void	ft_puthexa(unsigned int n, int *count, char c);

#endif
