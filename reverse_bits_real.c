/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits_real.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 20:05:22 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/31 20:09:48 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char r = 0;
	int len = 8;
	while (len--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return r;
}

int main()
{
	int i = 38;
	printf("%d", reverse_bits(i));
}
