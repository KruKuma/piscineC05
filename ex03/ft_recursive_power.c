/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 14:27:09 by nfurst            #+#    #+#             */
/*   Updated: 2026/06/30 14:53:37 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdlib.h>
// #include <stdio.h>
// int main(int argc, char* argv[])
// {
// 	int res;
// 	if (argc != 3)
// 		return (1);
// 	res = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
// 	printf("%d", res);
// 	return (0);
// }