/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:52:06 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/12/02 18:15:39 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int		main(void)
{
	int	div;
	int mod;
	
	div = 0;
	mod = 0;
	printf("%d   %d\n", div, mod);
	ft_div_mod(5, 3, &div, &mod);
	printf("%d   %d\n", div, mod);
}
/*Essa função divide os dois parâmetros a e b e armazena o resultado no int apontado
por div.
Ela também armazena o resto da divisão de a e b no int apontado por mod.*/
