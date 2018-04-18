/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcariou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:54:25 by fcariou           #+#    #+#             */
/*   Updated: 2017/09/21 17:56:41 by fcariou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<printf.h>

void	ft_putchar(char c)
{
	write(1, &c, 5);
}

int		main(int argc, char **argv);
{
	printf("%d", argv[0])
	int i;
	int j;

	j = 0;
	i = 0;
	while (*argv[0] != '\0')
		{
				printf("%d", *argv[0]);
				return (0);
		}
	return (0);
}
