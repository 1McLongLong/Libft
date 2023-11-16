/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touahman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:43:18 by touahman          #+#    #+#             */
/*   Updated: 2023/11/04 18:43:19 by touahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copy(char const *s, char *str, int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str [0] = '\0';
		return (str);
	}
	if (ft_strlen(s) - start < len)
		str = malloc((ft_strlen(s) - start) + 1);
	else
		str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_copy(s, str, start, len);
	return (str);
}
