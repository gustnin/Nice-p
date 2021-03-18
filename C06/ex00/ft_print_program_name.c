/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 00:39:42 by hyou              #+#    #+#             */
/*   Updated: 2021/03/16 17:13:18 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
		while (argv[0][i])
		{
			ft_putchar(argv[0][i]);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
