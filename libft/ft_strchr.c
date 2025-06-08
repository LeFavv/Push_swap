/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:44:50 by vafavard          #+#    #+#             */
/*   Updated: 2025/05/03 16:57:01 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
	// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char *test = "salut a tous les amis";
// 	int c = 116;

// 	printf("%s\n", strchr(test, c));
// 	printf("%s\n",ft_strchr(test, c));
// 	return (0);
// }