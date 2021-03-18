/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:32:57 by hyou              #+#    #+#             */
/*   Updated: 2021/03/11 12:28:49 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (s1[j] && s2[j] && i < n)
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
		i++;
		j++;
	}
	if (i == n)
		j--;
	return (s1[j] - s2[j]);
}
