/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:50:27 by jaeshin           #+#    #+#             */
/*   Updated: 2023/05/23 22:30:30 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{	
	int ft = 0;
	int *ptr = NULL;
	ptr = &ft;
	ptr = 20;
	
	ft_ft(&ft);
	printf("%d\n", ft);
}
