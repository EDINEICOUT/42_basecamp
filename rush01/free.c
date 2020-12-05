/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:52:54 by ecoutinh          #+#    #+#             */
/*   Updated: 2020/11/28 19:00:14 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

void aloca()
{
 int *ptr;
 ptr = (int *) malloc(100);
}

int main(void)
{
 while(1)
  aloca();

 return 0;
}
