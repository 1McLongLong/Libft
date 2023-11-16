/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: touahman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:43:01 by touahman          #+#    #+#             */
/*   Updated: 2023/11/04 18:43:02 by touahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++; 
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(&s[i]));
		i--;
	}
	return (NULL);
}
