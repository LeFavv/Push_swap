/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:54:37 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/30 10:34:28 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((*(unsigned char *)(s1 + i)) != (*(unsigned char *)(s2 + i)))
			return ((*(unsigned char *)(s1 + i)) -
				(*(unsigned char *)(s2 + i)));
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//    int arr1[] = {1, 2, 3, 4, 6};
//    int arr2[] = {1, 2, 3, 4, 6};

//    int result = memcmp(arr1, arr2, sizeof(arr1));

//    if (result == 0) {
//        printf("Arrays are equal\n");
//    } else {
//        printf("Arrays are not equal\n");
//    }
//     return 0;
// }