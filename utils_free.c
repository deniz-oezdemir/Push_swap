/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:25:07 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/27 19:57:05 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Frees the memory allocated for the linked list. */
void	free_lst(t_node *head)
{
	t_node	*tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

/* Frees all memory allocated in the main function,
including linked list and command line arguments. */
int	free_all(t_node *stack_a, int ac, char **av)
{
	int	i;

	free_lst(stack_a);
	if (av == 0)
	{
		free(av);
		return (0);
	}
	i = 0;
	if (ac == 2)
	{
		while (av[i])
		{
			free(av[i]);
			i++;
		}
		free(av);
	}
	return (0);
}
