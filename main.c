/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:44:41 by frgoncal          #+#    #+#             */
/*   Updated: 2025/10/30 22:09:54 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	printf("%d\n", ft_strncmp(str10, str11, 7));


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

	printf("-----------------atoi-----------------\n");

	char	str15[20] = "-3462sdf9898g";
	int		atoiRet = ft_atoi(str15);

	printf("%d\n", atoiRet);

	printf("-----------------calloc-----------------\n");

	size_t		numInts = 15;
	size_t		*arrayInts = ft_calloc(numInts, sizeof(size_t));

	printf("{");
	for(size_t i = 0; i < numInts; i++) {
  		printf("%ld, ", arrayInts[i]);
	}

	printf("}\n");

	free(arrayInts);
	arrayInts = NULL;

	printf("-----------------strdup-----------------\n");

	char	str16[20] = "oldstring";
	char	*str17 = ft_strdup(str16);

	printf("%s\n", str17);

	free(str17);

	printf("-----------------------------------------\n");
	printf("-----------------------------------------\n");

	printf("------------------substr-----------------\n");

	char	str18[20] = "123456789";
	char	*substr = ft_substr(str18, 4, 4);

	printf("%s\n", substr);

	printf("------------------strjoin-----------------\n");

	char	str19[20] = "abcdefgh";
	char	str20[30] = "1234567891234567sdfsdgf";
	char	*joined = ft_strjoin(str19, str20);
	printf("%s\n", joined);

	free(joined);

	printf("------------------strtrim-----------------\n");

	char	str21[30] = "abl23842llbbaa";
	char	str22[30] = "lab2";
	char	*trimmed = ft_strtrim(str21, str22);

	printf("Trimmed : %s\n", trimmed);

	free(trimmed);

	printf("------------------split-----------------\n");

	char	str23[80] = ",,,,asdggf,sdfasdg,4gg4,,,,";
	char	delim = ',';
	char	**arraySplit = ft_split(str23, delim);
	char	**ptr = arraySplit;

	while (*ptr != NULL)
	{
		printf("%s\n", *ptr);
		ptr++;
	}

	for (size_t i = 0; ptr[i] != NULL; i++) {
    	free(ptr[i]);
	}
	free(arraySplit);

	printf("------------------itoa-----------------\n");

	char *s;

    s = ft_itoa(0);      printf("%s\n", s); free(s);
    s = ft_itoa(42);     printf("%s\n", s); free(s);
    s = ft_itoa(-42);    printf("%s\n", s); free(s);
    s = ft_itoa(123456); printf("%s\n", s); free(s);
    s = ft_itoa(INT_MIN);printf("%s\n", s); free(s);

	printf("------------------striteri-----------------\n");
	
	char	str24[] = "abcdefgh";
	
	ft_striteri(str24, add_index);
	printf("%s\n", str24);

	printf("------------------strmapi-----------------\n");

	char	str25[] = "abcdefgh";

	char	*mapped = ft_strmapi(str25, mapping_function);

	printf("%s\n", mapped);

	printf("------------------putchar_fd-----------------\n");

	int fd = open("file.txt", O_RDWR);
	if (fd == -1)
		return (-1);
	ft_putchar_fd('p', fd);
	ft_putchar_fd('\n', fd);

	printf("------------------putstr_fd-----------------\n");

	ft_putstr_fd("abcdef", fd);
	ft_putchar_fd('\n', fd);

	printf("------------------putstr_fd-----------------\n");

	ft_putendl_fd("123456789", fd);

	printf("------------------putnbr_fd-----------------\n");

	ft_putnbr_fd(-2147483648, fd);
	ft_putchar_fd('\n', fd);

	printf("--------------------------------------------\n");
	printf("|                 BONUS                    |\n");
	printf("--------------------------------------------\n");

	printf("------------------lstnew--------------------\n");

	t_list	*list = ft_lstnew("ajh");
	printf("%s\n", (char *)list->content);

	printf("----------------lstadd_front----------------\n");

	t_list	*list2 = ft_lstnew("777");
	t_list *new_node1 = ft_lstnew("new1");
	t_list	*new_node2 = ft_lstnew("new2");
	ft_lstadd_front(&list2, new_node1);
	ft_lstadd_front(&list2, new_node2);

	t_list	*list3 = list2;
	t_list	*list4 = list2;
	t_list	*list5 = list2;
	while (list2 != NULL)
	{
		printf("%s", (char *)list2->content);
		if (list2->next != NULL)
            printf(" -> ");
		list2 = list2->next;
	}
	printf("\n");

	printf("----------------lstsize----------------\n");

	printf("%d\n", ft_lstsize(list3));

	printf("----------------lstlast----------------\n");

	t_list	*last_node = ft_lstlast(list4);
	printf("%s\n", (char *)last_node->content);
	
	printf("----------------lstadd_back----------------\n");
	
	t_list	*new_node3 = ft_lstnew("888");
	ft_lstadd_back(&list5, new_node3);

	while (list5 != NULL)
	{
		printf("%s", (char *)list5->content);
		if (list5->next != NULL)
            printf(" -> ");
		list5 = list5->next;
	}
	printf("\n");

	printf("----------------lstdelone----------------\n");

	t_list	*list6 = ft_lstnew("dih");
	t_list	*new_node4 = ft_lstnew("ahh");
	t_list	*new_node5 = ft_lstnew("big");
	
	ft_lstadd_front(&list6, new_node4);
	ft_lstadd_front(&list6, new_node5);

	
	ft_lstdelone(&list6[0], del);
	while (list6 != NULL)
	{
		printf("%s", (char *)list6->content);
		if (list6->next != NULL)
            printf(" -> ");
		list6 = list6->next;
	}

	return (0);
}
