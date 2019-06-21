/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3_divide_vector3.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 11:00:04 by jdorner           #+#    #+#             */
/*   Updated: 2018/09/25 16:07:11 by jdorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../constructs.h"

void	vector3_divide_vector3(t_vector3 v1, t_vector3 v2, t_vector3 ret)
{
	ret.x = v1.x / v2.x;
	ret.y = v1.y / v2.y;
	ret.z = v1.z / v2.z;
}
