/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcariou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 02:44:06 by fcariou           #+#    #+#             */
/*   Updated: 2017/09/17 20:46:03 by fcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi2(char a)
{
	if (a == '\t' || a == '\n' || a == '\r')
	{
		return (1);
	}
	else if (a == '\v' || a == '\f' || a == ' ')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ft_atoi(char *str)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 1;
	while (ft_atoi2(str[a]))
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a + 1] >= '0' && str[a + 1] <= '9')
		{
			if (str[a] == '-')
				c = -1;
			a++;
		}
		else
			return (0);
	}
	while (str[a] >= '0' && str[a] <= '9')
		b = b * 10 + str[a++] - '0';
	b = b * c;
	return (b);
}
