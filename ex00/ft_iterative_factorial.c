/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 00:06:49 by mgould            #+#    #+#             */
/*   Updated: 2016/10/29 11:16:55 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int temp;
	int i;

	i = 0;
	temp = 1;
	if (nb > 12)
	{
		return (0);
	}
	while (i < nb)
	{
		temp = temp * nb;
		nb--;
	}
	return (temp);
}
