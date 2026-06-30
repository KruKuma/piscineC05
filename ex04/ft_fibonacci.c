/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 15:10:21 by nfurst            #+#    #+#             */
/*   Updated: 2026/06/30 15:27:03 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[])
{
	int res;
	if (argc != 2)
		return (1);
	res = ft_fibonacci(atoi(argv[1]));
	printf("Result: %d", res);
	return (0);
}
