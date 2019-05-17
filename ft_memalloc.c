/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 13:52:00 by mrivera-          #+#    #+#             */
/*   Updated: 2019/05/14 14:02:40 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude "libft.h"

void	*ft_memalloc(size_t size)
{
	void *res;

	res = malloc((size));
	if (res == 0)
		return (NULL);
	ft_bzero(res, size);
	return (res);
}
