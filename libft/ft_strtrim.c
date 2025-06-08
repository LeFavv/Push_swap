/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:45:37 by vafavard          #+#    #+#             */
/*   Updated: 2025/05/05 11:07:25 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	search_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (s1[i])
	{
		j = 0;
		count = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count++;
			}
			j++;
		}
		if (count == 0)
			return (i);
		i++;
	}
	return (i);
}

int	search_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (s1[i])
		i++;
	i -= 1;
	while (i >= 0)
	{
		j = 0;
		count = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count++;
			}
			j++;
		}
		if (count == 0)
			return (i);
		i--;
	}
	return (i);
}

char	*return_if_alone(char *result)
{
	result = malloc(1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		i;
	int		end;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	res = NULL;
	start = search_start(s1, set);
	end = search_end(s1, set);
	i = 0;
	if (end < start)
		return (return_if_alone(res));
	res = malloc(sizeof(char) * ((end - start + 1) + 1));
	if (!res)
		return (NULL);
	while (i < (end - start + 1))
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	 if (argc == 3)
// 	 {
// 		 char *res = ft_strtrim(argv[1], argv[2]);
// 		 printf("%s\n", res);
// 		 free(res);
// 	 }
// 	 return (0);
//  }
