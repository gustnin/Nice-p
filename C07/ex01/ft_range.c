/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:44:59 by hyou              #+#    #+#             */
/*   Updated: 2021/03/16 21:37:36 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*dest;
	int		*ret;

	if (min >= max)
		return (0);
	ret = (int*)malloc(sizeof(int) * (max - min));
	if (!ret)
		return (0);
	dest = ret;
	while (min < max)
		*(dest++) = min++;
	return (ret);
}
