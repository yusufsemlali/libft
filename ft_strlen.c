/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:04:59 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/09 18:33:14 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char	*str;

	str = (char *)s;
	if (!s)
		return (0);
	while (*str)
		str++;
	return (str - s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *s = "hello world";
// 	int i = ft_strlen(s);
// 	int b = ft_strlen(s);
// 	printf(" %d   ,   %d", i, b);
// }