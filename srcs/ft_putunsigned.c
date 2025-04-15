/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:38:10 by olthorel          #+#    #+#             */
/*   Updated: 2025/04/15 13:38:25 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putunsigned(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 9)
		len = len + ft_putunsigned(nb / 10);
	len = len + ft_putchar(nb % 10 + 48);
	return (len);
}
