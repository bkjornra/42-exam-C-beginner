/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 17:50:27 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/31 18:19:21 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	print_bits(unsigned char octet)
{
	int i = 256;
	while (i >>= 1)
	{
	(octet & i)? write(1, "1", 1) : write(1, "0", 1);
	}
}

unsigned char		reverse_bits(unsigned char octet)
{
	unsigned char r = 0;
	int len = 8;

	while (len--)
	{
		r = (r << 1) | (octet & 1)
		octet >>= 1;
	}
	return (r) 
}

int main()
{
	int i = 38;
	int j = reverse_bits(i);
	print_bits(j);
	return (0);
}
