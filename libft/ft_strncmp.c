/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:45:26 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/29 10:15:22 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(int argc, char **argv)
// {
//     if (argc == 4)
//     {
//         int result;	
//         result = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
//         printf("%d\n", result);
// 		printf("%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
//     }
//     return (0);
// }