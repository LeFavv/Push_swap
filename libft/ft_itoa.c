/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:43:31 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/28 21:53:13 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_to_malloc(int nb)
{
	long	nb2;
	int		lenght;

	nb2 = nb;
	lenght = 0;
	if (nb2 < 0)
	{
		lenght++;
		nb2 *= -1;
	}
	if (nb2 == 0)
		lenght++;
	while (nb2)
	{
		nb2 /= 10;
		lenght++;
	}
	return (lenght);
}

char	*rev_str(char *str)
{
	int		i;
	int		size;
	char	temp;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb2;
	int		i;

	i = 0;
	nb2 = n;
	res = malloc(sizeof(char) * (len_to_malloc(n) + 1));
	if (!res)
		return (NULL);
	if (nb2 < 0)
		nb2 *= -1;
	if (nb2 == 0)
		res[i++] = '0';
	while (nb2)
	{
		res[i++] = nb2 % 10 + '0';
		nb2 /= 10;
	}
	if (n < 0)
		res[i++] = '-';
	res[i] = '\0';
	return (rev_str(res));
}
// #include <stdio.h>

// int main(void)
// {
//     char *res = ft_itoa(123456789);
// 	char *res2 = ft_itoa(-1234);
// 	char *res3 = ft_itoa(0);
// 	char *res4 = ft_itoa(-2147483648);

//     printf("%s\n", res);
// 	printf("%s\n", res2);
// 	printf("%s\n", res3);
// 	printf("%s\n", res4);
//     free(res);
// 	free(res2);
// 	free(res3);
// 	free(res4);
//     return (0);
// }
