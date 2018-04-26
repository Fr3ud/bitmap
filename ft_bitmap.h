/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitmap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavelko <apavelko@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 14:04:00 by apavelko          #+#    #+#             */
/*   Updated: 2018/04/26 14:04:00 by apavelko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BITMAP_H
# define FT_BITMAP_H

typedef int		t_bitmap;
typedef int		*t_bitmap_p;
t_bitmap_p		create_bitmap(void);
void			dispose_bitmap(t_bitmap_p map);
void			set_bit(t_bitmap_p map, int index, char value);
int				get_bit(t_bitmap_p map, int index);
void			print_bitmap(t_bitmap_p map);
void			set_0(t_bitmap_p map);
void			set_1(t_bitmap_p map);

#endif
