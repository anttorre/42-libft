/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:31:19 by anttorre          #+#    #+#             */
/*   Updated: 2023/04/24 15:17:00 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	unsigned int	i;

	d = dst;
	s = src;
	i = 0;
	if (!s && !d)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *)dst);
}

/*
#include <stdio.h>
#include <string.h>

int main () {
   int srcarr[5] = {111, 222, 333, 444, 555};
   int destarr[5] = {555, 444, 253, 222, 111};
   
   printf("Before memcpy dest\n");
   for (int i = 0; i < 5; i++)
   {
		printf("%d ", destarr[i]);
   }
   printf("\n");
   ft_memcpy(destarr, srcarr, 12);
   printf("After memcpy dest\n");
   for (int i = 0; i < 5; i++)
   {
		printf("%d ", destarr[i]);
   }
   return(0);
}
*/