/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:23:51 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/27 20:12:25 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Performs size and duplicate checks on the given stack A.
If either check fails, frees memory and terminates with an error.
If the stack is already sorted, free memory and exit successfully. */
void	perform_checks(t_node *stack_a, int ac, char **av)
{
	if (is_too_big(stack_a) || has_duplicates(stack_a))
	{
		free_all(stack_a, ac, av);
		write(2, "Error\n", 6);
		exit(1);
	}
	if (is_sorted(stack_a))
	{
		free_all(stack_a, ac, av);
		exit(0);
	}
}

/* Checks for duplicate numbers in the linked list. */
int	has_duplicates(t_node *head)
{
	t_node	*tmp;

	if (!head)
		return (0);
	while (head->next)
	{
		tmp = head;
		while (tmp->next)
		{
			tmp = tmp->next;
			if (tmp->nbr == head->nbr)
				return (1);
		}
		head = head->next;
	}
	return (0);
}

/* Checks if the size of the linked list is within limits.
This is necessary to assign correct indexes with the assign_index function. */
int	is_too_big(t_node *head)
{
	int	size;

	size = 0;
	while (head)
	{
		head = head->next;
		size++;
		if (size == INT_MAX)
			return (1);
	}
	return (0);
}

/* Checks if the numbers in the linked list are in sorted order. */
int	is_sorted(t_node *head)
{
	t_node	*tmp;

	while (head->next)
	{
		tmp = head;
		while (tmp->next)
		{
			tmp = tmp->next;
			if (head->nbr > tmp->nbr)
				return (0);
		}
		head = head->next;
	}
	return (1);
}
