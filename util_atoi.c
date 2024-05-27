/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denizozd <denizozd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:23:29 by denizozd          #+#    #+#             */
/*   Updated: 2024/05/27 12:07:44 by denizozd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Frees allocated memory and raises an error. */
static void	free_error_exit(t_node *stack_a, int ac, char **av)
{
	free_all(stack_a, ac, av);
	write(2, "Error\n", 6);
	exit(1);
}

/* Converts a string to an integer with error handling.
Raises an error if the input is not a valid integer. */
int	custom_atoi(const char *s, t_node *stack_a, int ac, char **av)
{
	int			i;
	int			m;
	long long	v;

	i = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (!s[i] || ((s[i] == '+' || s[i] == '-') && !ft_isdigit(s[i + 1])))
		free_error_exit(stack_a, ac, av);
	m = 1;
	if (s[i] == '+' || s[i] == '-')
		if (s[i++] == '-')
			m = -1;
	v = 0;
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			free_error_exit(stack_a, ac, av);
		else
			v = v * 10 + (s[i] - '0');
		i++;
	}
	if ((m * v < INT_MIN) || (m * v > INT_MAX))
		free_error_exit(stack_a, ac, av);
	return (m * v);
}
