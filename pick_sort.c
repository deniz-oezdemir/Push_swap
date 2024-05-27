/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:55:55 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/25 17:45:42 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Selects the sorting algorithm based on the size of the linked list. */
t_node	*pick_sort(t_node *stack_a)
{
	t_node	*stack_b;
	int		size_a;

	stack_b = NULL;
	size_a = stack_size(stack_a);
	if (size_a < 2)
		return (stack_a);
	if (size_a == 2)
		return (sort_2(stack_a));
	if (size_a == 3)
		return (sort_3(stack_a));
	if (size_a == 4)
		return (sort_4(stack_a, stack_b));
	if (size_a == 5)
		return (sort_5(stack_a, stack_b));
	if (size_a > 5)
		return (sort_big(stack_a, stack_b));
	return (0);
}
