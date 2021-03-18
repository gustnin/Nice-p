/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 19:47:39 by hyou              #+#    #+#             */
/*   Updated: 2021/03/17 05:22:04 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int						ft_strlen(char *str)
{
	int					i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void					ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str			*res;
	int					i;

	res = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = (char*)malloc(res[i].size + 1);
		res[i].copy = (char*)malloc(res[i].size + 1);
		ft_strcpy(res[i].str, av[i]);
		ft_strcpy(res[i].copy, av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}
