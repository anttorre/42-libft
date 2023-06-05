/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:00:46 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/28 11:28:35 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	num_length;

	num_length = ft_nbrlen(n);
	str = (char *)malloc(num_length + 1);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		ft_strlcpy(str, "-2147483648", num_length + 1);
	if (n == 0)
		ft_strlcpy(str, "0", num_length + 1);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[num_length] = '\0';
	num_length--;
	while (n > 0)
	{
		str[num_length] = n % 10 + '0';
		n /= 10;
		num_length--;
	}
	return (str);
}
