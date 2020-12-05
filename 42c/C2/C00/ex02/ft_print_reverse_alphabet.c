/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 03:41:08 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/11/26 12:30:28 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	caracter;
	int		contador;

	contador = 1;
	caracter = 'z';
	while (contador < 27)
	{
		write(1, &caracter, 1);
		contador++;
		caracter--;
	}
}
