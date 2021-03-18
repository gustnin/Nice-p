/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:48:11 by hyou              #+#    #+#             */
/*   Updated: 2021/03/06 16:07:55 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *com)
{
	int i;

	i = 0;
	while (com[i])
	{
		write(1, &com[i], 1);
		i++;
	}
}

void	ft_cpr(char *a, char *b)
{
	if (*b > '9')
	{
		*b = '0';
		(*a)++;
	}
}

void	ft_print_comb2(void)
{
	char com[7];

	com[0] = '0';
	com[1] = '0';
	com[2] = ' ';
	com[3] = '0';
	com[4] = '1';
	com[5] = ',';
	com[6] = ' ';
	while (com[0] != '9' && com[1] != '9')
	{
		ft_putchar(com);
		com[4]++;
		ft_cpr(&com[3], &com[4]);
		if (com[3] == '9' && com[4] == '9')
		{
			com[1]++;
			ft_cpr(&com[0], &com[1]);
			com[3] = '0';
			com[4] = '1';
		}
	}
	write(1, "98 99", 5);
}
