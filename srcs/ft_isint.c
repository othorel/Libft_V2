/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olthorel <olthorel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:43:36 by olthorel          #+#    #+#             */
/*   Updated: 2025/04/15 14:43:46 by olthorel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isint(char *str)
{
	int		sign;
	long	nb;

	sign = 1;
	nb = 0;
	if (!str || *str == '\0' || *str == '\n')
		return (0);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (!*str)
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		nb = (nb * 10) + (*str - 48);
		if ((sign == 1 && nb > INT_MAX) || (sign == -1 && - nb < INT_MIN))
			return (0);
		str++;
	}
	return (1);
}
