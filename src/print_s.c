/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stonegaw <stonegaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 23:25:48 by takenakatak       #+#    #+#             */
/*   Updated: 2025/05/05 18:56:51 by stonegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int	print_s(char *str)
{
	int		res;
	char	*nul;

	nul = "(null)";
	if (!str)
		return (write(1, nul, ft_strlen(nul)));
	res = ft_strlen(str);
	return (write(1, str, res));
}
