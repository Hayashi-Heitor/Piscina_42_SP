/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:58:45 by hhayashi          #+#    #+#             */
/*   Updated: 2025/03/24 19:10:26 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n <= 0)
		return (0);
	while ((*s1 != '\0' || *s2 != '\0') && *s1 == *s2 && n - 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
