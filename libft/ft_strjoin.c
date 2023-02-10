/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 12:13:46 by yidrissi          #+#    #+#             */
/*   Updated: 2023/02/09 19:15:09 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const	*s2)
{
	char	*f;
	char	*se;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	se = (char *)s2;
	f = (char *)s1;
	ptr = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	// printf("im here\n");
	if (!ptr)
		return (ptr);
	while (f && f[i] != '\0')
		ptr[i++] = f[j++];
	j = 0;
	while (se && se[j] != '\0')
		ptr[i++] = se[j++];
	ptr[i] = '\0';
	free(f);
	return (ptr);
}

/*
int main(void)
{
	char 	*s1 = "yassime";
	char 	*s2 = "dse";
	printf ("%s", ft_strjoin(s1, s2));
}
*/