/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:40:04 by hyou              #+#    #+#             */
/*   Updated: 2021/03/14 19:50:23 by hyou             ###   ########.fr       */
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
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int		print_nbr(long long nbr, int b_len, char *base)
{
	if (nbr >= b_len)
	{
		print_nbr(nbr / b_len, b_len, base);
		print_nbr(nbr % b_len, b_len, base);
	}
	else
		write(1, &base[nbr], 1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			b_len;
	long long	nbr2;

	b_len = base_len(base);
	nbr2 = nbr;
	if (not_base(base))
		return ;
	if (nbr2 < 0)
	{
		write(1, "-", 1);
		nbr2 = (-1) * nbr2;
	}
	print_nbr(nbr2, b_len, base);
}
