/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 10:30:06 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/31 13:27:49 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_blank(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int isalpha_base(char c, int base)
{
	char digit[17] = "0123456789abcdef";
	char digit2[17] = "0123456789ABCDEF";
	while (base--)
		if (digit[base] == c || digit2[base] ==c)
			return (1);
	return (0);		
}

int valueof(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	return(0);
}

int ft_atoi_base(const char *str, int base)
{
	int result;
	int sign;

	result = 0;
	while (is_blank(*str))
		str++;
	sign = (*str == '-')? -1 : 1;
	(*str == '-' ||*str == '+')? str++ : 0;
	while (isalpha_base(*str, base))
		result = result * base + valueof(*str++);
	return (result * sign);
}

int main(int ac, char **av)
{
	if (ac == 3)
		printf("result: %d\n", ft_atoi_base(av[1], ft_atoi_base(av[2], 10)));
	return (0);	
}
