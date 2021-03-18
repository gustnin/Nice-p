/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyou <hyou@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:33:26 by hyou              #+#    #+#             */
/*   Updated: 2021/03/09 18:19:36 by hyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		right_char(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (right_char(str[i]))
		{
			if (str[i] >= 97 && str[i] <= 122 && flag)
				str[i] = str[i] - 32;
			else if (str[i] >= 65 && str[i] <= 90 && !flag)
				str[i] = str[i] + 32;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}
