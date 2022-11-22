/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoipiscine.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:32:58 by gpouzet           #+#    #+#             */
/*   Updated: 2022/11/15 20:53:33 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoipiscine(const char *str)
{
	int	i;
	int	compt;
	int	nb;

	i = 0;
	compt = 1;
	nb = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			compt *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - 48);
	return (nb * compt);
}
