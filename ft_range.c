/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 20:37:24 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/31 21:28:40 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int len;
    len = (start >= end)? (start - end + 1) : (end - start + 1);

	int i = 0;
	int *r;
	r = (int*)malloc(sizeof(int) * len);
	while (len--)
		if (start > end)
		{
			r[i] = start - i;
			i++;
		}
		else if (end > start)
		{
			r[i] = start + i;
			i++;
		}
		else if (start == end)
			r[0] = start;
		else
			return (0);
	return (r);
}

int main()
{	
	int *r;
	 r  = ft_rrange(1, 3);
	printf("%d %d %d %d", r[0], r[1], r[2], r[3]);
}

