/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:19:10 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/13 22:28:33 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j++] = ft_substr(s, i, ft_wordlen(&s[i], c));
			i += ft_wordlen(&s[i], c);
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}
// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	**words;

// 	str = "The quick brown fox jumps over the lazy dog";
// 	words = ft_split(str, ' ');
// 	if (!words)
// 	{
// 		printf("Error: ft_split returned NULL\n");
// 		return (1);
// 	}
// 	for (int i = 0; words[i]; i++)
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 	}
// 	free(words);
// 	return (0);
// }
