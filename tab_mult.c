/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 13:38:16 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/31 15:01:45 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{	
		ft_putnbr(n /10);
		ft_putnbr(n % 10);		
	}
	else 
		ft_putchar(n + '0');
}	

int		ft_atoi(char *s)
{
	int r;
	r = 0;
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return (r);
}

void	tab_mult(int n)
{
	int i = 1;
	while (i < 10)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(i++ * n);
		write(1, "\n", 1);
	}
}	

int		main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(ft_atoi(av[1]));
	else
		ft_putchar('\n');
	return (0);
}

