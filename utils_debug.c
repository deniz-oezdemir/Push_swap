/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_debug.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:34:23 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/26 16:57:04 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Prints the nbr of each node in the linked list. */
void	print_stack_nbr(t_node *head)
{
	int	i;

	i = 0;
	while (head)
	{
		ft_printf("nbr node[%d]: %d\n", i, head->nbr);
		head = head->next;
		i++;
	}
}

/* Prints the index and nbr of each node in the linked list. */
void	print_stack_index_nbr(t_node *head)
{
	int	i;

	i = 0;
	while (head)
	{
		ft_printf("index | nbr node[%d]: %d | %d\n", i, head->index,
			head->nbr);
		head = head->next;
		i++;
	}
}
