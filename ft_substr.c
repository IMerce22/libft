/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insoares <insoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:08:46 by insoares          #+#    #+#             */
/*   Updated: 2024/04/20 18:33:12 by insoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub_str;
	unsigned int	t_sub_str;

	if (start > ft_strlen(s))
		return ("");
	i = 0;
	t_sub_str = ft_strlen(s + start);
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

/* int	main(void)
{
	const char		s[] = "lorem ipsum dolor amet";
	unsigned int	start;
	size_t			len;

	start = 0;
	len = 10;
	printf("%s", ft_substr(s, start, len));
	return (0);
} */
