/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:19:49 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/27 19:43:56 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_node
{
	int				nbr;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

/*	pick_sort.c	*/
t_node				*pick_sort(t_node *stack_a);

/*	sort_small.c	*/
t_node				*sort_2(t_node *head_a);
t_node				*sort_3(t_node *head_a);
t_node				*sort_4(t_node *head_a, t_node *head_b);
t_node				*sort_5(t_node *head_a, t_node *head_b);

/*	sort_big.c	*/
t_node				*sort_big(t_node *head_a, t_node *head_b);
void				assign_indexes(t_node *head_a);
void				atob_interval(t_node **head_a, t_node **head_b);
void				btoa_max(t_node **head_a, t_node **head_b);

/*	ops_push.c	*/
void				pa(t_node **head_b, t_node **head_a);
void				pb(t_node **head_a, t_node **head_b);

/*	ops_reverse_rotate.c	*/
void				rra(t_node **head);
void				rrb(t_node **head);

/*	ops_rotate.c	*/
void				ra(t_node **head);
void				rb(t_node **head);

/*	ops_swap.c	*/
void				sa(t_node **head);
void				sb(t_node **head);

/*	custom_atoi.c	*/
int					custom_atoi(const char *s, t_node *stack_a, int ac,
						char **av);

/*	utils_check.c	*/
void				perform_checks(t_node *stack_a, int ac, char **av);
int					has_duplicates(t_node *head);
int					is_too_big(t_node *head);
int					is_sorted(t_node *head);

/*	utils_stack.c	*/
t_node				*add_node(t_node *head, int nbr);
int					stack_size(t_node *head);
t_node				*last_node(t_node *stack);
int					position_min_nbr(t_node *head);
int					position_max_index(t_node *head);

/*	utils_free.c	*/
void				free_lst(t_node *head);
int					free_all(t_node *stack_a, int ac, char **av);

/*	utils_debug.c - helpful for debugging, but not to be submitted */
void				print_stack_nbr(t_node *head);
void				print_stack_index_nbr(t_node *head);

#endif
