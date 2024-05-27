/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:05:45 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/27 19:42:31 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_node **head)
{
	*head = (*head)->next;
	(*head)->prev->prev = last_node(*head);
	(*head)->prev->next = NULL;
	(*head)->prev->prev->next = (*head)->prev;
	(*head)->prev = NULL;
}

void	ra(t_node **head)
{
	if (!(*head))
		return ;
	if (!((*head)->next))
		return ;
	rotate(head);
	ft_printf("ra\n");
}

void	rb(t_node **head)
{
	if (!(*head))
		return ;
	if (!((*head)->next))
		return ;
	rotate(head);
	ft_printf("rb\n");
}
