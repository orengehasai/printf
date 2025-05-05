/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stonegaw <stonegaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 23:25:44 by takenakatak       #+#    #+#             */
/*   Updated: 2025/05/05 19:06:37 by stonegaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../libft/libft.h"

int	print_p(void *p)
{
	int		cnt;
	int		is_init_zeros;
	char	*base;
	char	*nul;

	nul = "(nil)";
	if (!p)
		return (write(1, nul, ft_strlen(nul)));
	cnt = write(1, "0x", 2);
	is_init_zeros = 0;
	base = "0123456789abcdef";
	put_hex((uintptr_t)p, base, &cnt, &is_init_zeros);
	return (cnt);
}
