/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_reverse_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:16:12 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/27 19:42:24 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_node **head)
{
	(*head)->prev = last_node(*head);
	(*head)->prev->next = *head;
	(*head)->prev->prev->next = NULL;
	(*head)->prev->prev = NULL;
	*head = (*head)->prev;
}

void	rra(t_node **head)
{
	reverse_rotate(head);
	ft_printf("rra\n");
}

void	rrb(t_node **head)
{
	reverse_rotate(head);
	ft_printf("rrb\n");
}
