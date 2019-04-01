/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 21:31:06 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/31 21:57:01 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

#endif


#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	struct s_list 	*next;
	void 			*data;
}				t_list;

#endif
