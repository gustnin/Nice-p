/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:48:09 by hyou              #+#    #+#             */
/*   Updated: 2021/03/06 19:19:50 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int len;
	int	rev[size];

	i = 0;
	len = size - 1;
	while (tab[len])
	{
		rev[i] = tab[len];
		len--;
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = rev[i];
		i++;
	}
}
