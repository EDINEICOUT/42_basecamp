/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:21:48 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/12/02 17:10:09 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int *********nbr;
	int ********a;
	int *******b;
	int ******c;
	int *****d;
	int ****e;
	int ***f;
	int **g;
	int *h;
	int i;
	
	i = 12;
	nbr = &a;
	a = &b;
	b = &c;
	c = &d;
	d = &e;
	e = &f;
	f = &g;
	g = &h;
	h = &i;

	printf("%d\n", i);
	ft_ultimate_ft(nbr);
	printf("%d\n", i);
	printf("\n");

	return (0);
}
