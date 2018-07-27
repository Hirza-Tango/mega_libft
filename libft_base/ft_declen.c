/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_declen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dslogrov <dslogrove@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 16:19:26 by dslogrov          #+#    #+#             */
/*   Updated: 2018/07/24 16:43:11 by dslogrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_declen(intmax_t dec)
{
	size_t	ret;

	ret = 1;
	while ((dec /= 10))
		ret++;
	return (ret);
}
