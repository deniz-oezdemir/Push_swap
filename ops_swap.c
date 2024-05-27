/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:34:33 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/26 17:17:12 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_node **head)
{
	if (stack_size(*head) == 2)
	{
		*head = (*head)->next;
		(*head)->next = (*head)->prev;
		(*head)->prev = NULL;
		(*head)->next->prev = *head;
		(*head)->next->next = NULL;
	}
	else
	{
		*head = (*head)->next;
		(*head)->prev->next = (*head)->next;
		(*head)->prev->prev = *head;
		(*head)->next->prev = (*head)->prev;
		(*head)->next = (*head)->prev;
		(*head)->prev = NULL;
	}
}

void	sa(t_node **head)
{
	swap(head);
	ft_printf("sa\n");
}

void	sb(t_node **head)
{
	swap(head);
	ft_printf("sb\n");
}
