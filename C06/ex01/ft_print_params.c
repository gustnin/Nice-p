/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 01:10:25 by hyou              #+#    #+#             */
/*   Updated: 2021/03/16 15:34:55 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (argc > i)
	{
		while (*argv[i])
			write(1, (argv[i])++, 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}