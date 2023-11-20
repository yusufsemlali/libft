/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:13:53 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/19 17:53:52 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	next_set_found(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	front_trim(char *s, char *set)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (next_set_found(set, s[i]))
			i++;
		else
			break ;
	}
	return (i);
}

int	end_trim(char *s, char *set)
{
	int	i;

	i = (ft_strlen(s) - 1);
	while (i >= 0)
	{
		if (next_set_found(set, s[i]))
			i--;
		else
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		end;
	char	*result;
	int		i;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	front = front_trim((char *)s1, (char *)set);
	end = end_trim((char *)s1, (char *)set);
	if (front > end)
	{
		result = ft_strdup("");
		return (result);
	}
	result = (char *)malloc((end - front) + 2);
	if (result == NULL)
		return (NULL);
	while (front <= end)
		result[i++] = s1[front++];
	return (result[i] = '\0', result);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		char *s = argv[1];
// 		char *set = argv[2];
// 		char *res = ft_strtrim(s, set);
// 		printf("%s\n", res);
// 		return (0);
// 	}
// }