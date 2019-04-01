/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 22:55:00 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/31 23:26:16 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void rostring(char *s)
{
	int i = 0;
	int wlen = 0;

	while (s[i])
	{
		while (ft_isblank(s[i]))
			i++;
		if (s[i] && !ft_isblank(s[i]))
		{
			if (!wlen)
				while (s[i] && !ft_isblank(s[i++]))
					wlen++;
			else
			{
				while (s[i])
					write(1, &s[i++], 1);
			}
		}
	}
	write (1, " ", 1);
	i = 0;
	while (ft_isblank(s[i]))
		i++;
	while (wlen--)
		write(1, &s[i++], 1);
}

int main(int ac, char **av)
{
	if (ac > 1 && *av[1])
		rostring(av[1]);
	write(1,"\n", 1);
	return (0);
}
