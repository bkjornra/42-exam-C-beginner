/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 16:49:07 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/31 17:57:23 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
	int i =256;
	while (i >>= 1)
	{
		(octet & i)? write(1, "1", 1) : write(1, "0", 1);
	}
}

int main()
{
	int i = 2;
	print_bits(i);
	return (0);
}
