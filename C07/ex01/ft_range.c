/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:45:35 by hhayashi          #+#    #+#             */
/*   Updated: 2025/04/03 15:54:51 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max);

int *ft_range(int min, int max)
{
	int count;
	int *pointer;

	if (min >= max)
		return (0);
	count = 0;
	while (min < max)
	{
		pointer = malloc(sizeof(int));
		*pointer = min;
		min++;
	}
	return (pointer);
}
