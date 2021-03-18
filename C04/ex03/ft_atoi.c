/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 11:30:27 by hyou              #+#    #+#             */
/*   Updated: 2021/03/14 15:11:28 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1 * sign;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + *str - '0';
			str++;
		}
		else
			break ;
	}
	return (result * sign);
}
