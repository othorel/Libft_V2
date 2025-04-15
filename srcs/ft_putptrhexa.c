/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptrhexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:35:26 by olthorel          #+#    #+#             */
/*   Updated: 2025/04/15 13:35:55 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putptrhexa(unsigned long long addr)
{
	int					len;
	char				hexa[17];
	char				*base;
	int					i;

	len = 0;
	i = 0;
	base = "0123456789abcdef";
	if (addr == 0)
		return (ft_putchar('0'));
	while (addr > 0)
	{
		hexa[i] = base[addr % 16];
		addr = addr / 16;
		i++;
	}
	while (i > 0)
	{
		len = len + ft_putchar(hexa[i - 1]);
		i--;
	}
	return (len);
}
