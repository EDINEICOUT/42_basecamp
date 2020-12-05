/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabt.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 00:31:24 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/11/26 02:02:13 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	caracter;
	int		contador;

	contador = 1;
	caracter = 'a';
	while (contador < 27)
	{
		write(1, &caracter, 1);
		contador++;
		caracter++;
	}
}
