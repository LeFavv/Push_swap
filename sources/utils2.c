/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 05:33:24 by vafavard          #+#    #+#             */
/*   Updated: 2025/06/13 19:24:11 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_count_word(char const *s, char c);
char	*ft_malloc(char const *s, int start, int end);
char	**ft_split(char const *s, char c);
int		extern_loop(const char *s, int i, char c, int flag);

int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

char	*ft_malloc(char const *s, int start, int end)
{
	int		range;
	int		i;
	char	*res;

	range = end - start;
	i = 0;
	res = malloc(sizeof(char) * (range + 1));
	if (!res)
		return (NULL);
	while (i < range)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	extern_loop(const char *s, int i, char c, int flag)
{
	if (flag == 0)
	{
		while (s[i] && s[i] == c)
			i++;
		return (i);
	}
	else
	{
		while (s[i] && !(s[i] == c))
			i++;
		return (i);
	}
}

char	**ft_split(char const *s, char c)
{
	int		i_tab;
	int		start;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	i_tab = 0;
	i = 0;
	tab = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		i = extern_loop(s, i, c, 0);
		start = i;
		i = extern_loop(s, i, c, 1);
		if (start != i)
		{
			tab[i_tab++] = ft_malloc(s, start, i);
			if (!tab[i_tab - 1])
				return (free_split(tab), NULL);
		}
	}
	return (tab[i_tab] = NULL, tab);
}
