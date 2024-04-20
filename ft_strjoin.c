/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insoares <insoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:39:07 by insoares          #+#    #+#             */
/*   Updated: 2024/04/20 19:42:01 by insoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		t_total;
	size_t		i;
	size_t		j;
	size_t		t_s1;
	size_t		t_s2;
	char const	*new_str;

	t_s1 = ft_strlen(s1);
	t_s2 = ft_strlen(s2);
	new_str = (const char *)malloc(sizeof (char) * (t_s1 + t_s2) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	new_str = s1;
	return ((char *)new_str);
}
int	main(void)
{
	char const	s1[] = "ines"; 
	char const	s2[] = "quecivel";
	
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}