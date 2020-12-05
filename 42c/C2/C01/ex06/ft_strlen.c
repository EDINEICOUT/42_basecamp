/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:40:40 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/12/02 21:51:26 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <strings.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(void)
{
	char texto[] = "A CARA DA MALDADE";
	printf("%d\n", ft_strlen(texto));
}

/*Escreva uma função que contenha o número de caracteres
em uma string de caracteres que retorne ao número encontrado.
• Ela deverá ser prototipada da seguinte maneira:*/