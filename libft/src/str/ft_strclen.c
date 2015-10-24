/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:20:55 by jripoute          #+#    #+#             */
/*   Updated: 2015/05/10 05:10:33 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strclen(char const *s, char c)
{
	size_t		i;

	i = 0;
	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		else
			i++;
	}
	if (c == '\0' && !s[i])
		return (i);
	return (i-1);
}
