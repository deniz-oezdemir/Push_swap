/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:48:32 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/27 19:42:02 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Processes command-line arguments, creates stack_a,
ensures data integrity by checking for duplicates, validating stack size,
and sorted input.
Selects and applies sorting algorithms based on the size of the stack,
and releases all allocated memory resources before program termination. */
int	main(int ac, char **av)
{
	int		i;
	t_node	*stack_a;

	i = 1;
	stack_a = NULL;
	if (ac == 1)
		return (0);
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		if (av == 0)
		{
			free_all(stack_a, ac, av);
			write(2, "Error\n", 6);
			exit(1);
		}
		i = 0;
	}
	if (ac > 1)
		while (av[i])
			stack_a = add_node(stack_a, custom_atoi(av[i++], stack_a, ac, av));
	perform_checks(stack_a, ac, av);
	stack_a = pick_sort(stack_a);
	return (free_all(stack_a, ac, av));
}
