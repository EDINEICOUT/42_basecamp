/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:22:30 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/12/02 18:51:14 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_ultimate_div_mod(int *a, int *b)
{
	*div = a/b;
	*mod = a%b;
	*a = div;
	*b = mod;
}

int		main(void)
{
	int	a;
	int b;
	
	a = div;
	b = mod;
	printf("%d   %d\n", a, b);
	ft_div_mod(5, 3, &a, &b);
	printf("%d   %d\n", a, b);
}



/*• Escreva uma função ft_ultimate_div_mod que tenha a seguinte prototipagem
Essa função divide os int apontados por a e b.
O resultado da divisão está armazenado no int apontado por a.
O resultado do resto da divisão está armazenado no int apontado por b.*/