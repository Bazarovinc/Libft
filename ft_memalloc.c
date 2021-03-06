/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctelma <ctelma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:23:30 by ctelma            #+#    #+#             */
/*   Updated: 2019/09/09 17:38:52 by ctelma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	size_t	i;

	mem = (char*)malloc(sizeof(char) * size);
	if (!mem)
		return (NULL);
	i = 0;
	while (i < size)
	{
		mem[i] = '\0';
		i++;
	}
	return (mem);
}
