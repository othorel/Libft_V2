/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:36:54 by olthorel          #+#    #+#             */
/*   Updated: 2025/04/15 13:37:10 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		len = len + ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		len = len + ft_putnbr(nb / 10);
	len = len + ft_putchar(nb % 10 + 48);
	return (len);
}
