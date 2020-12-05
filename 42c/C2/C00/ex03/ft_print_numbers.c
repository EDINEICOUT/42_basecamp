/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:03:38 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/11/26 19:23:03 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		numbers;

	numbers = 48;
	while (numbers <= 57)
	{
		write(1, &numbers, 1);
		numbers++;
	}
}
