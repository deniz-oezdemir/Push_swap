/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:50:09 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/26 18:29:56 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Sorts two numbers in ascending order. */
t_node	*sort_2(t_node *head_a)
{
	if (head_a->nbr > head_a->next->nbr)
		sa(&head_a);
	return (head_a);
}

/* Sorts three numbers in ascending order. */
t_node	*sort_3(t_node *head_a)
{
	int	a;
	int	b;
	int	c;

	a = head_a->nbr;
	b = head_a->next->nbr;
	c = head_a->next->next->nbr;
	if (a < b && b > c && a < c)
	{
		sa(&head_a);
		ra(&head_a);
	}
	else if (a > b && b < c && a < c)
		sa(&head_a);
	else if (a < b && b > c && a > c)
		rra(&head_a);
	else if (a > b && b < c && a > c)
		ra(&head_a);
	else if (a > b && b > c && a > c)
	{
		sa(&head_a);
		rra(&head_a);
	}
	return (head_a);
}

/* Sorts four numbers in ascending order. */
t_node	*sort_4(t_node *head_a, t_node *head_b)
{
	int	i;
	int	min_pos;

	i = 2;
	while (i--)
	{
		min_pos = position_min_nbr(head_a);
		if (min_pos == 1)
			ra(&head_a);
		if (min_pos == 2)
		{
			ra(&head_a);
			ra(&head_a);
		}
		if (min_pos == 3)
			rra(&head_a);
		pb(&head_a, &head_b);
	}
	head_a = sort_2(head_a);
	pa(&head_b, &head_a);
	pa(&head_b, &head_a);
	return (head_a);
}

/* Sorts five numbers in ascending order. */
t_node	*sort_5(t_node *head_a, t_node *head_b)
{
	int	min_pos;

	min_pos = position_min_nbr(head_a);
	if (min_pos == 1 || min_pos == 2)
		ra(&head_a);
	if (min_pos == 2)
		ra(&head_a);
	if (min_pos == 3)
		rra(&head_a);
	if (min_pos == 3 || min_pos == 4)
		rra(&head_a);
	pb(&head_a, &head_b);
	min_pos = position_min_nbr(head_a);
	if (min_pos == 1 || min_pos == 2)
		ra(&head_a);
	if (min_pos == 2)
		ra(&head_a);
	if (min_pos == 3)
		rra(&head_a);
	pb(&head_a, &head_b);
	head_a = sort_3(head_a);
	pa(&head_b, &head_a);
	pa(&head_b, &head_a);
	return (head_a);
}
