/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:44:34 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/28 13:59:01 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (!(fd >= 1))
		return ;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}
/*
#include <limits.h>

int main(void)
{
	ft_putnbr_fd(INT_MIN, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(INT_MAX, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(42, 1);
	write (1, "\n", 1);
	return 0;
}*/
