/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 22:56:27 by nfurst            #+#    #+#             */
/*   Updated: 2026/07/02 12:06:53 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main(int argc, char* argv[])
// {
//     int res;
//     if (argc != 2)
//         return (1);
//     res = ft_sqrt(atoi(argv[1]));
//     printf("Result: %d", res);
//     return (0);
// }