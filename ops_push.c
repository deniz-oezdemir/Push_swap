/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:29:26 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/27 19:42:17 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_node **src, t_node **dst)
{
	if (*dst == NULL)
	{
		*src = (*src)->next;
		*dst = (*src)->prev;
		(*dst)->next = NULL;
		(*dst)->prev = NULL;
		(*src)->prev = NULL;
	}
	else if ((*src)->next == NULL)
	{
		(*src)->next = *dst;
		(*dst)->prev = *src;
		*dst = *src;
		*src = NULL;
	}
	else
	{
		*src = (*src)->next;
		(*src)->prev->next = *dst;
		*dst = (*src)->prev;
		(*dst)->next->prev = *dst;
		(*src)->prev = NULL;
	}
}

void	pb(t_node **head_a, t_node **head_b)
{
	push(head_a, head_b);
	ft_printf("pb\n");
}

void	pa(t_node **head_b, t_node **head_a)
{
	push(head_b, head_a);
	ft_printf("pa\n");
}
