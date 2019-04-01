/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits_real.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:58:18 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/31 20:04:04 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i =256;
	while (i >>= 1)
		(octet & i)? write (1, "1", 1) : write (1, "0", 1);
}

int main()
{
	int i = 38;
	print_bits(i);
	return (0);
}
