/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 13:53:28 by mgould            #+#    #+#             */
/*   Updated: 2016/10/29 21:42:20 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int r;

	r = 1;
	while (r < 46340)
	{
		if ((r * r) == nb)
		{
			return (r);
		}
		r = (r + 1);
	}
	return (0);
}
