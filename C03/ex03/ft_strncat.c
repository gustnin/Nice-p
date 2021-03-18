/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:54:02 by hyou              #+#    #+#             */
/*   Updated: 2021/03/09 10:54:26 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	int i;
	unsigned	int j;
	unsigned	int k;
	char			*ptr;

	i = 0;
	j = 0;
	k = 0;
	ptr = dest;
	while (ptr[i])
		i++;
	while (src[j] && k < nb)
	{
		ptr[i] = src[j];
		i++;
		j++;
		k++;
	}
	while (ptr[i])
	{
		ptr[i] = 0;
		i++;
	}
	return (dest);
}
