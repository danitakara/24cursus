/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dani_takara <dani_takara@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 21:07:55 by dani_takara       #+#    #+#             */
/*   Updated: 2021/02/02 21:07:57 by dani_takara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diferencinha;
	unsigned int	tamanho;

	i = 0;
	tamanho = 0;
	while (s1[i] != '\0')
	{
		tamanho++;
		i++;
	}
	i = 0;
	while (i <= tamanho && i < n)
	{
		if (s1[i] != s2[i])
		{
			diferencinha = s1[i] - s2[i];
			return (diferencinha);
		}
		i++;
	}
	return (0);
}