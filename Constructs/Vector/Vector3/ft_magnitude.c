/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_magnitude.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdorner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:30:41 by jdorner           #+#    #+#             */
/*   Updated: 2018/09/25 16:00:35 by jdorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../constructs.h"

float	ft_magnitude(t_vector3 v1, t_vector3 v2)
{
	return (ft_sqr(v1.x * v2.x + v1.y * v2.y + v1.z * v2.z));
}
