/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:27:53 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/28 14:53:53 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	uppercase(unsigned int index, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hola PepiTO";
	ft_striteri(src, uppercase);

	printf("Nueva string en mayusculas: %s\n", src);
	return (0);
}
*/