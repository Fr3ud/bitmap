/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitmap_constr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavelko <apavelko@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 14:04:00 by apavelko          #+#    #+#             */
/*   Updated: 2018/04/26 14:04:00 by apavelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bitmap.h"
#include <stdlib.h>

t_bitmap_p	create_bitmap(void)
{
	t_bitmap_p new_map;

	if ((new_map = (t_bitmap_p)malloc(sizeof(t_bitmap))) == NULL)
		return (NULL);
	*new_map = 0;
	return (new_map);
}

void		dispose_bitmap(t_bitmap_p map)
{
	if (map != NULL)
		free(map);
}
