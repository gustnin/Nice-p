/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:22:55 by hyou              #+#    #+#             */
/*   Updated: 2021/03/15 01:37:20 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 1 || index == 2)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
