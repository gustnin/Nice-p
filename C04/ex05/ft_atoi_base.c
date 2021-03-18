/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:42:21 by hyou              #+#    #+#             */
/*   Updated: 2021/03/14 17:48:54 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		base_len(char *base)
{
	int	base_len;

	base_len = 0;
	while (*(base++))
		base_len++;
	return (base_len);
}

int		not_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (!base || base_len(base) == 1)
			return (1);
		while (base[i] && base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' ||
				(base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (1);
		i++;
	}
	return (0);
}

int		ft_atoi(char *str)
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

int		same_index(char *str, char *base)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == base[j])
			return (j);
		j++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int	b_len;
	int	result;
	int sign;

	b_len = base_len(base);
	result = 0;
	sign = 1;
	if (not_base(base))
		return (0);
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			write(1, "-", 1);
		str++;
	}
	while (*str)
	{
		if (same_index(str, base))
			result = same_index(str, base) * b_len + result;
		else
			break ;
		str++;
	}
	return (0);
}
