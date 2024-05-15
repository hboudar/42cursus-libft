/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:40:38 by hboudar           #+#    #+#             */
/*   Updated: 2023/11/20 22:22:01 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	n;
	unsigned long	n_ll;
	int				sign;
	int				i;

	(1) && (i = 0, n_ll = 0, n = 0);
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i])
		i++;
	sign = (str[i] == '-') * -1 + (str[i] == '+' || str[i] != '-');
	i += (str[i] == '-' || str[i] == '+');
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		n = n * 10 + str[i] - 48;
		if (n / 10 != n_ll && sign == 1)
			return (-1);
		else if (n / 10 != n_ll)
			return (0);
		n_ll = n;
		i++;
	}
	return (n * sign);
}
