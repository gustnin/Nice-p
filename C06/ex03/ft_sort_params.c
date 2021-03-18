/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 02:37:26 by hyou              #+#    #+#             */
/*   Updated: 2021/03/16 15:37:09 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strcmp(char *a, char *b)
{
	while (*a == *b && *a && *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	ft_sort_argv(int size, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (++j < size)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) > 0)
			{
				temp = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = temp;
			}
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	ft_sort_argv(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
