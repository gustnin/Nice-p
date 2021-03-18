/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:29:08 by hyou              #+#    #+#             */
/*   Updated: 2021/03/18 17:04:37 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_strlen(char *str)
{
	long long i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strcat(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	*dst = 0;
	return (dst);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char		*res;
	char		*tmp;
	long long	strs_len;
	int			i;

	if (!size)
	{
		res = ((char*)malloc(1));
		res[0] = 0;
		return (res);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	res = (char*)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	tmp = ft_strcat(res, strs[0]);
	i = 1;
	while (i < size)
	{
		tmp = ft_strcat(tmp, sep);
		tmp = ft_strcat(tmp, strs[i++]);
	}
	*tmp = 0;
	return (res);
}
