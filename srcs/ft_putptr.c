/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:40:32 by olthorel          #+#    #+#             */
/*   Updated: 2025/04/15 13:40:49 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putptr(void *ptr)
{
	int	len;

	if (ptr == NULL)
	{
		len = ft_putstr("(nil)");
		return (len);
	}
	len = ft_putstr("0x");
	len = len + ft_putptrhexa((unsigned long long)ptr);
	return (len);
}
