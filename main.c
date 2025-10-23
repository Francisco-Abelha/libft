/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:44:41 by frgoncal          #+#    #+#             */
/*   Updated: 2025/10/23 15:56:08 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("---------------isalpha---------------\n");
	int		c1;
	int		num1;

	c1 = 'a';
	num1 = ft_isalpha(c1);
	printf("%d\n", num1);

	printf("---------------isdigit---------------\n");
	int		c2;
	int		num2;

	c2 = '0';
	num2 = ft_isdigit(c2);
	printf("%d\n", num2);

	printf("---------------isalnum---------------\n");
	int		c3;
	int		num3;

	c3 = '4';
	num3 = ft_isalnum(c3);
	printf("%d\n", num3);

	printf("---------------isascii---------------\n");
	int		c4;
	int		num4;

	c4 = 7;
	num4 = ft_isascii(c4);
	printf("%d\n", num4);

	printf("--------------isprintable--------------\n");

	int		c5;
	int		num5;

	c5 = 127;
	num5 = ft_isprintable(c5);
	printf("%d\n", num5);

	printf("----------------strlen----------------\n");

	char	*str1;
	int		len1;

	str1 = "sdhag";
	len1 = ft_strlen(str1);
	printf("%d\n", len1);

	printf("----------------memset----------------\n");

	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
	ft_memset(str + 13, '.', 8*sizeof(char));

	printf("After memset():  %s\n", str);

	printf("-----------------bzero-----------------\n");

	char	str2[60] = "Bla bla bla mega bla bla bla type shi";
	printf("\nBefore ft_bzero(): %s\n", str2);

	ft_bzero(str2 + 12, 4*sizeof(char));

	printf("After ft_bzero(): %s\n", str2);

	printf("-----------------memcpy-----------------\n");

	char str3[] = "Geeks";
    char str4[6] = "";

    ft_memcpy(str4, str3, sizeof(str3));

    printf("str2 after memcpy:");
    printf("%s\n",str4);

	printf("-----------------memmove-----------------\n");

	char str5[20] = "ABCDEFGH";

	ft_memmove(str5 + 2, str5, 3);

	printf("%s\n", str5);

	printf("-----------------strlcpy-----------------\n");

	char	str6[20] = "asjdj4sh";
	char	str7[6] = "";
	int		len2;

	len2 = strlcpy(str7, str6, sizeof(str7));
	printf("%s\n", str7);
	printf("%d\n", len2);

	printf("-----------------strlcat-----------------\n");

	char	str8[40] = "dasdfas";
	char	str9[10] = "66345";
	int		len3;

	len3 = ft_strlcat(str9, str8, sizeof(str9));
	printf("%s\n", str9);
	printf("%d\n", len3);

	printf("-----------------toupper-----------------\n");

	int	low = 'x';

	printf("%c\n", ft_toupper(low));

	printf("-----------------tolower-----------------\n");

	int	up = 'D';

	printf("%c\n", ft_tolower(up));

	printf("-----------------strchr-----------------\n");

	char	haystack[40] = "haystack";
	int		needle = 'a';

	printf("%s\n", ft_strchr(haystack, needle));

	printf("-----------------strrchr-----------------\n");

	char	haystack2[40] = "haystack2";
	int		needle2 = 'a';

	printf("%s\n", ft_strrchr(haystack2, needle2));

	printf("-----------------strncmp-----------------\n");

	char	str10[20] = "abcdefg";
	char	str11[20] = "abcdeff";

	printf("%d\n", ft_strncmp(str10, str11, 4));


	printf("-----------------memchr-----------------\n");
	
	char	str12[20] = "ahgdhada7";

	printf("%s\n", (char *)ft_memchr(str12, '7', 10));

	printf("-----------------memcmp-----------------\n");

	char	str13[20] = "1234567";
	char	str14[20] = "1234577";

	printf("%d\n", ft_memcmp(str13, str14, 6));

	printf("-----------------strnstr-----------------\n");

	char	haystack3[50] = "tralalalalacacapapapa";
	char	needle3[20] = "capa";
	
	printf("%s\n", ft_strnstr(haystack3, needle3, 17));

	return (0);
}
