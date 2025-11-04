/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:44:41 by frgoncal          #+#    #+#             */
/*   Updated: 2025/11/04 16:20:35 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int		num, n, len;
	char	*str, *a, *b, *c;
	t_list	*lst;

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                ISALPHA                   |\n");
	printf("--------------------------------------------\n");

	n = 'a';
	num = ft_isalpha(n);
	printf("%d\n", num);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                ISDIGIT                   |\n");
	printf("--------------------------------------------\n");

	n = '0';
	num = ft_isdigit(n);
	printf("%d\n", num);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                ISALNUM                   |\n");
	printf("--------------------------------------------\n");

	n = '4';
	num = ft_isalnum(n);
	printf("%d\n", num);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                ISASCII                   |\n");
	printf("--------------------------------------------\n");

	n = 7;
	num = ft_isascii(n);
	printf("%d\n", num);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                  ISPRINT                 |\n");
	printf("--------------------------------------------\n");

	n = 127;
	num = ft_isprint(n);
	printf("%d\n", num);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRLEN                    |\n");
	printf("--------------------------------------------\n");

	str = "sdhag";
	len = ft_strlen(str);
	printf("%d\n", len);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                MEMSET                    |\n");
	printf("--------------------------------------------\n");

	char	mem_str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", mem_str);

    // Fill 8 characters starting from str[13] with '.'
	ft_memset(mem_str + 13, '.', 8*sizeof(char));

	printf("After memset():  %s\n", mem_str);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                 BZERO                    |\n");
	printf("--------------------------------------------\n");

	char	bz_str[50] = "Bla bla bla mega bla bla bla type shi";
	printf("\nBefore ft_bzero(): %s\n", bz_str);

	ft_bzero(bz_str + 12, 4*sizeof(char));

	printf("After ft_bzero(): %s\n", bz_str);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                MEMCPY                    |\n");
	printf("--------------------------------------------\n");

	char str3[6] = "";
    char str4[6] = "";

    ft_memcpy(str4, str3, 9);

    printf("str2 after memcpy:");
    printf("%s\n",str4);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                MEMMOVE                   |\n");
	printf("--------------------------------------------\n");

	char str5[20] = "ABCDEFGH";

	ft_memmove(str5 + 2, str5, 3);

	printf("%s\n", str5);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRLCPY                   |\n");
	printf("--------------------------------------------\n");

	char	str6[20] = "asjdj4sh";
	char	str7[6] = "";
	int		len2;

	len2 = strlcpy(str7, str6, sizeof(str7));
	printf("%s\n", str7);
	printf("%d\n", len2);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRLCAT                   |\n");
	printf("--------------------------------------------\n");

	char	str8[40] = "dasdfas";
	char	str9[10] = "66345";
	int		len3;

	len3 = ft_strlcat(str9, str8, sizeof(str9));
	printf("%s\n", str9);
	printf("%d\n", len3);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                TOUPPER                   |\n");
	printf("--------------------------------------------\n");

	int	low = 'x';

	printf("%c\n", ft_toupper(low));

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                TOLOWER                   |\n");
	printf("--------------------------------------------\n");

	int	up = 'D';

	printf("%c\n", ft_tolower(up));

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRCHR                    |\n");
	printf("--------------------------------------------\n");

	char	haystack[40] = "haystack";
	int		needle = 'a';

	printf("%s\n", ft_strchr(haystack, needle));

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRRCHR                   |\n");
	printf("--------------------------------------------\n");

	char	haystack2[40] = "haystack2";
	int		needle2 = 'a';

	printf("%s\n", ft_strrchr(haystack2, needle2));

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRNCMP                   |\n");
	printf("--------------------------------------------\n");

	char	str10[20] = "abcdefg";
	char	str11[20] = "abcdeff";

	printf("%d\n", ft_strncmp(str10, str11, 7));


	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                MEMCHR                    |\n");
	printf("--------------------------------------------\n");

	char	str12[20] = "ahgdhada7";

	printf("%s\n", (char *)ft_memchr(str12, '7', 10));

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                MEMCMP                    |\n");
	printf("--------------------------------------------\n");

	char	str13[20] = "1234567";
	char	str14[20] = "1234577";

	printf("%d\n", ft_memcmp(str13, str14, 6));

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRNSTR                   |\n");
	printf("--------------------------------------------\n");

    char *s11 = "MZIRIBMZIRIBMZE123";
    char *s22 = "MZIRIBMZE";
	size_t max = strlen(s22);
    char *i1 = strnstr(s11, s22, max);
    char *i2 = ft_strnstr(s11, s22, max);

	printf("%s %s\n", i1, i2);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                  ATOI                    |\n");
	printf("--------------------------------------------\n");

	char	str15[20] = "-+42";
	int		atoiRet = ft_atoi(str15);

	printf("%d\n", atoiRet);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                CALLOC                    |\n");
	printf("--------------------------------------------\n");

	size_t		numInts = 15;
	size_t		*arrayInts = ft_calloc(numInts, sizeof(size_t));

	printf("{");
	for(size_t i = 0; i < numInts; i++) {
  		printf("%ld, ", arrayInts[i]);
	}

	printf("}\n");

	free(arrayInts);
	arrayInts = NULL;

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRDUP                    |\n");
	printf("--------------------------------------------\n");

	char	str16[20] = "oldstring";
	char	*str17 = ft_strdup(str16);

	printf("%s\n", str17);

	free(str17);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                SUBSTR                    |\n");
	printf("--------------------------------------------\n");

	char	str18[20] = "123456789";
	char	*substr = ft_substr(str18, 4, 4);

	printf("%s\n", substr);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRJOIN                   |\n");
	printf("--------------------------------------------\n");

	char	str19[20] = "abcdefgh";
	char	str20[30] = "1234567891234567sdfsdgf";
	char	*joined = ft_strjoin(str19, str20);
	printf("%s\n", joined);

	free(joined);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRTRIM                   |\n");
	printf("--------------------------------------------\n");

	char	*str21 = "";
	char	*str22 = "";

	printf("Trimmed : %s\n",  ft_strtrim(str21, str22));

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                 SPLIT                    |\n");
	printf("--------------------------------------------\n");

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

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                  ITOA                    |\n");
	printf("--------------------------------------------\n");

	char *s;

    s = ft_itoa(0);      printf("%s\n", s); free(s);
    s = ft_itoa(42);     printf("%s\n", s); free(s);
    s = ft_itoa(-42);    printf("%s\n", s); free(s);
    s = ft_itoa(123456); printf("%s\n", s); free(s);
    s = ft_itoa(INT_MIN);printf("%s\n", s); free(s);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|               STRITERI                   |\n");
	printf("--------------------------------------------\n");

	char	str24[] = "abcdefgh";

	ft_striteri(str24, add_index);
	printf("%s\n", str24);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRMAPI                   |\n");
	printf("--------------------------------------------\n");

	char	str25[] = "abcdefgh";

	char	*mapped = ft_strmapi(str25, mapping_function);

	printf("%s\n", mapped);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|               PUTCHAR_FD                 |\n");
	printf("--------------------------------------------\n");

	int fd = open("file.txt", O_RDWR);
	if (fd == -1)
		return (-1);
	ft_putchar_fd('p', fd);
	ft_putchar_fd('\n', fd);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                PUTSTR_FD                 |\n");
	printf("--------------------------------------------\n");

	ft_putstr_fd("abcdef", fd);
	ft_putchar_fd('\n', fd);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|               PUTENDL_FD                 |\n");
	printf("--------------------------------------------\n");

	ft_putendl_fd("123456789", fd);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                PUTNBR_FD                 |\n");
	printf("--------------------------------------------\n");

	ft_putnbr_fd(-214, fd);
	ft_putchar_fd('\n', fd);

	printf("--------------------------------------------\n");
	printf("|                 BONUS                    |\n");
	printf("|                 BONUS                    |\n");
	printf("|                 BONUS                    |\n");
	printf("|                 BONUS                    |\n");
	printf("|                 BONUS                    |\n");
	printf("|                 BONUS                    |\n");
	printf("--------------------------------------------\n");

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                  LSTNEW                  |\n");
	printf("--------------------------------------------\n");

	lst = ft_lstnew("ajh");
	printf("%s\n", (char *)lst->content);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|              LSTADD_FRONT                |\n");
	printf("--------------------------------------------\n");

	a = ft_strdup("char1");
	b = ft_strdup("char2");
	c = ft_strdup("char3");

	lst = ft_lstnew(a);
	ft_lstadd_front(&lst, ft_lstnew((void *)b));
	ft_lstadd_front(&lst, ft_lstnew(c));

	printf("%s -> %s -> %s\n",
		(char *)lst->content,
		(char *)lst->next->content,
		(char *)lst->next->next->content);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                 LSTSIZE                  |\n");
	printf("--------------------------------------------\n");

	printf("%d\n", ft_lstsize(lst));

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                 LSTLAST                  |\n");
	printf("--------------------------------------------\n");

	t_list	*last_node = ft_lstlast(lst);
	printf("%s\n", (char *)last_node->content);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|               LSTADD_BACK                |\n");
	printf("--------------------------------------------\n");

	a = ft_strdup("list");
	b = ft_strdup("add");
	c = ft_strdup("back");

	lst = ft_lstnew(a);
	ft_lstadd_back(&lst, ft_lstnew(b));
	ft_lstadd_back(&lst, ft_lstnew(c));

	printf("%s -> %s -> %s\n",
		(char *)lst->content,
		(char *)lst->next->content,
		(char *)lst->next->next->content);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|               LSTDELONE                  |\n");
	printf("--------------------------------------------\n");

	char *malstr = malloc(10);
	ft_strlcpy(malstr, "test1", 10);

	t_list	*list6 = ft_lstnew(malstr);
	t_list	*new_node4 = ft_lstnew("dih");
	t_list	*new_node5 = ft_lstnew("bih");

	ft_lstadd_back(&list6, new_node4);
	ft_lstadd_back(&list6, new_node5);

	if (list6 != NULL) {
    	t_list *to_delete = list6;
    	list6 = list6->next;
    	ft_lstdelone(to_delete, del);
	}
	while (list6 != NULL)
	{
		printf("%s", (char *)list6->content);
		if (list6->next != NULL)
            printf(" -> ");
		list6 = list6->next;
	}
	printf("\n");
	printf("--------------------------------------------\n");
	printf("|               LSTCLEAR                   |\n");
	printf("--------------------------------------------\n");

	a = ft_strdup("blahblahblah");
	b = ft_strdup("blehblehbleh");
	c = ft_strdup("bluhbluhbluh");

	lst = ft_lstnew(a);
	ft_lstadd_front(&lst, ft_lstnew(b));
	ft_lstadd_front(&lst, ft_lstnew(c));

	printf("%s -> %s -> %s\n",
		(char *)lst->content,
		(char *)lst->next->content,
		(char *)lst->next->next->content);

	ft_lstclear(&lst, del);

	if (lst == NULL)
		printf("List is now NULL (cleared)\n");
	else
		printf("%s\n", (char*)lst->content);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                LSTITER                   |\n");
	printf("--------------------------------------------\n");

	a = ft_strdup("test1");
	b = ft_strdup("test2");
	c = ft_strdup("test3");

	lst = ft_lstnew(a);
	ft_lstadd_front(&lst, ft_lstnew(b));
	ft_lstadd_front(&lst, ft_lstnew(c));

	printf("%s -> %s -> %s\n",
		(char *)lst->content,
		(char *)lst->next->content,
		(char *)lst->next->next->content);

	ft_lstiter(lst, print_str);
	ft_lstiter(lst, to_upper);
	ft_lstiter(lst, print_str);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                LSTMAP                    |\n");
	printf("--------------------------------------------\n");

	t_list	*lstmap = NULL;

	a = ft_strdup("test1");
	b = ft_strdup("test2");
	c = ft_strdup("test3");

	lst = ft_lstnew(a);
	ft_lstadd_front(&lst, ft_lstnew(b));
	ft_lstadd_front(&lst, ft_lstnew(c));

	lstmap = ft_lstmap(lst, to_upper2, del);

	printf("%s -> %s -> %s\n",
		(char *)lstmap->content,
		(char *)lstmap->next->content,
		(char *)lstmap->next->next->content);

	return (0);
}
