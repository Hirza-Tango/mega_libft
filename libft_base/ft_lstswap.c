/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dslogrov <dslogrove@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:06:44 by dslogrov          #+#    #+#             */
/*   Updated: 2018/06/27 13:36:45 by dslogrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstswap(t_list *a, t_list *b)
{
	void		*a_content;
	size_t		a_size;

	a_size = a->content_size;
	a_content = a->content;
	a->content = b->content;
	a->content_size = b->content_size;
	b->content = a_content;
	b->content_size = a_size;
}
