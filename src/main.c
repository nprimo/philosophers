/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprimo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:25:01 by nprimo            #+#    #+#             */
/*   Updated: 2022/03/05 17:44:40 by nprimo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_rules	rules;

	if (ac == 5 || ac == 6)
	{
		printf("Run simulation\n");
		rules = init_rules(ac, av);
	}
	else
		printf("Run ./philo with 4 or 5 args!\n");
	return (0);
}
