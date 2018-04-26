/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavelko <apavelko@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 14:04:00 by apavelko          #+#    #+#             */
/*   Updated: 2018/04/26 14:04:00 by apavelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bitmap.h"
#include <unistd.h>

void		set_bit(t_bitmap_p map, int index, char value)
{
	t_bitmap tmp;

	if (index > sizeof(*map) * 8 - 1)
		return ;
	tmp = 1;
	tmp = tmp << index;
	if (value)
		*map = *map | tmp;
	else
	{
		tmp = ~tmp;
		*map = *map & tmp;
	}
}

int			get_bit(t_bitmap_p map, int index)
{
	t_bitmap result;

	if (index > sizeof(*map) * 8 - 1)
		return (0);
	result = 1;
	result = result << index;
	result = *map & result;
	result = result >> index;
	return (result);
}

void		print_bitmap(t_bitmap_p map)
{
	int		i;
	char	bit;

	i = sizeof(*map) * 8 - 1;
	while (i >= 0)
	{
		bit = get_bit(map, i--) ? '1' : '0';
		write(1, &bit, 1);
	}
	write(1, "\n", 1);
}

void		set_0(t_bitmap_p map)
{
	*map = 0;
}

void		set_1(t_bitmap_p map)
{
	*map = ~(t_bitmap)(0);
}
