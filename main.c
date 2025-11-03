/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgoncal2 <fgoncal2@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:44:41 by frgoncal          #+#    #+#             */
/*   Updated: 2025/11/03 17:31:44 by fgoncal2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                ISALPHA                   |\n");
	printf("--------------------------------------------\n");
	int		c1;
	int		num1;

	c1 = 'a';
	num1 = ft_isalpha(c1);
	printf("%d\n", num1);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                ISDIGIT                   |\n");
	printf("--------------------------------------------\n");
	int		c2;
	int		num2;

	c2 = '0';
	num2 = ft_isdigit(c2);
	printf("%d\n", num2);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                ISALNUM                   |\n");
	printf("--------------------------------------------\n");
	int		c3;
	int		num3;

	c3 = '4';
	num3 = ft_isalnum(c3);
	printf("%d\n", num3);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                ISASCII                   |\n");
	printf("--------------------------------------------\n");
	int		c4;
	int		num4;

	c4 = 7;
	num4 = ft_isascii(c4);
	printf("%d\n", num4);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|              ISPRINTABLE                 |\n");
	printf("--------------------------------------------\n");

	int		c5;
	int		num5;

	c5 = 127;
	num5 = ft_isprintable(c5);
	printf("%d\n", num5);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                STRLEN                    |\n");
	printf("--------------------------------------------\n");

	char	*str1;
	int		len1;

	str1 = "sdhag";
	len1 = ft_strlen(str1);
	printf("%d\n", len1);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                MEMSET                    |\n");
	printf("--------------------------------------------\n");

	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
	ft_memset(str + 13, '.', 8*sizeof(char));

	printf("After memset():  %s\n", str);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                 BZERO                    |\n");
	printf("--------------------------------------------\n");

	char	str2[60] = "Bla bla bla mega bla bla bla type shi";
	printf("\nBefore ft_bzero(): %s\n", str2);

	ft_bzero(str2 + 12, 4*sizeof(char));

	printf("After ft_bzero(): %s\n", str2);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                MEMCPY                    |\n");
	printf("--------------------------------------------\n");

	char str3[] = "Geeks";
    char str4[6] = "";

    ft_memcpy(str4, str3, sizeof(str3));

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

	char	haystack3[50] = "tralalalalacacapapapa";
	char	needle3[20] = "capa";

	printf("%s\n", ft_strnstr(haystack3, needle3, 17));

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                  ATOI                    |\n");
	printf("--------------------------------------------\n");

	char	str15[20] = "-3462sdf9898g";
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

	char	str21[30] = "abl23842llbbaa";
	char	str22[30] = "lab2";
	char	*trimmed = ft_strtrim(str21, str22);

	printf("Trimmed : %s\n", trimmed);

	free(trimmed);

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

	ft_putnbr_fd(-2147483648, fd);
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

	t_list	*list = ft_lstnew("ajh");
	printf("%s\n", (char *)list->content);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|              LSTADD_FRONT                |\n");
	printf("--------------------------------------------\n");

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

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                 LSTSIZE                  |\n");
	printf("--------------------------------------------\n");

	printf("%d\n", ft_lstsize(list3));

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                 LSTLAST                  |\n");
	printf("--------------------------------------------\n");

	t_list	*last_node = ft_lstlast(list4);
	printf("%s\n", (char *)last_node->content);
	
	printf("\n");
	printf("--------------------------------------------\n");
	printf("|               LSTADD_BACK                |\n");
	printf("--------------------------------------------\n");
	
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

	t_list	*lst7 = NULL;

	char	*a = ft_strdup("blahblahblah");
	char	*b = ft_strdup("blehblehbleh");
	char	*c = ft_strdup("bluhbluhbluh");

	lst7 = ft_lstnew(a);
	ft_lstadd_front(&lst7, ft_lstnew(b));
	ft_lstadd_front(&lst7, ft_lstnew(c));

	printf("%s -> %s -> %s\n", 
		(char *)lst7->content,
		(char *)lst7->next->content,
		(char *)lst7->next->next->content);
	
	ft_lstclear(&lst7, del);

	if (lst7 == NULL)
        printf("List is now NULL (cleared)\n");
    else
        printf("%s\n", (char*)lst7->content);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                LSTITER                   |\n");
	printf("--------------------------------------------\n");

	t_list	*lst8 = NULL;

	char	*d = ft_strdup("test1");
	char	*e = ft_strdup("test2");
	char	*f = ft_strdup("test3");

	lst8 = ft_lstnew(d);
	ft_lstadd_front(&lst8, ft_lstnew(e));
	ft_lstadd_front(&lst8, ft_lstnew(f));

	printf("%s -> %s -> %s\n", 
		(char *)lst8->content,
		(char *)lst8->next->content,
		(char *)lst8->next->next->content);
	
	ft_lstiter(lst8, print_str);
	ft_lstiter(lst8, to_upper);
	ft_lstiter(lst8, print_str);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("|                LSTMAP                    |\n");
	printf("--------------------------------------------\n");

	t_list	*lst9 = NULL;
	t_list	*lstmap = NULL;

	char	*g = ft_strdup("test1");
	char	*h = ft_strdup("test2");
	char	*i = ft_strdup("test3");

	lst9 = ft_lstnew(g);
	ft_lstadd_front(&lst9, ft_lstnew(h));
	ft_lstadd_front(&lst9, ft_lstnew(i));
	
	lstmap = ft_lstmap(lst9, to_upper2, del);
	
	printf("%s -> %s -> %s\n", 
		(char *)lstmap->content,
		(char *)lstmap->next->content,
		(char *)lstmap->next->next->content);
	return (0);
}
