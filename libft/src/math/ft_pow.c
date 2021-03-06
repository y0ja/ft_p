/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 22:11:20 by y0ja              #+#    #+#             */
/*   Updated: 2015/05/09 02:13:52 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_pow(double x, int y)
{
	int		power;
	double	ret;

	ret = x;
	power = y - 1;
	if (y == 0)
		return (1.0);
	while (power > 0)
	{
		ret *= x;
		power--;
	}
	return (ret);
}
