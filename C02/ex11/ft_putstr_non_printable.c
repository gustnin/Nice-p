/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:03:52 by hyou              #+#    #+#             */
/*   Updated: 2021/03/09 10:33:37 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ch_hex(unsigned char c)
{
	c = c + '0';
	if (c > '9')
		c = c + 39;
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			ch_hex((unsigned char)str[i] / 16);
			ch_hex((unsigned char)str[i] % 16);
		}
		i++;
	}
}
