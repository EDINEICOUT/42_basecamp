/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:14:12 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/12/02 17:50:01 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

int		main(void)
{
	int a;
	int b;

	a = 24;
	b = 42;
	printf("%d   %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d   %d\n", a, b);
}
