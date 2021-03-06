/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 10:41:03 by mrivera-          #+#    #+#             */
/*   Updated: 2019/05/24 10:26:51 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long c, int len)
{
	int base;

	base = 10;
	while (c > 0)
	{
		c /= base;
		len++;
	}
	return (len);
}
