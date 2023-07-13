#include <stdio.h>

// #include "ex00/ft_strdup.c"
// #include "ex01/ft_range.c"
// #include "ex02/ft_ultimate_range.c"
// #include "ex03/ft_strjoin.c"
// #include "ex04/ft_convert_base.c"
// #include "ex04/ft_convert_base2.c"
// #include "ex05/ft_split.c"

int	main ()
{	
	printf("TESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
	printf("\n--ex00--\n\n");

	printf("%s\n", ft_strdup("hi~"));
	
	printf("\n--ex01--\n\n");

	int i;
	int	min;
	int	max;
	int *arr;

	i = 0;
	min = -6;
	max = 4;
	arr = ft_range(min, max);
	while (min < max)
	{
		printf("%d\n", arr[i++]);
		min++;
	}

	printf("\n--ex02--\n\n");

	int	*arr2;
	int	min2;
	int max2;

	min2 = -6;
	max2 = 5;
	i = 0;
	ft_ultimate_range(&arr2, min2, max2); // &
	while (min2 < max2)
	{
		printf("%d\n", arr2[i++]);
		min2++;
	}

	printf("\n--ex03--\n\n");

	char	*strs[] = {"My", "Name", "is", "soonhyung", "!"};
	char	*sep = "+-+";
	char	*joined;
	joined = ft_strjoin(5, strs, sep);
	printf("ft_strjoin(0, strs, sep)\n");
	printf("address : %p\n", joined);
	printf("%s\n\n", joined);
	joined = ft_strjoin(0, strs, sep);
	printf("ft_strjoin(0, strs, sep)\n");
	printf("address : %p\n", joined);
	printf("%s\n\n", joined);

	printf("\n--ex04--\n\n");
	
	printf("%s\n", ft_convert_base("-2147483648", "0123456789", "01234567"));
	printf("%s\n", ft_convert_base("  +2147483647", "0123456789", "0123456789"));
	printf("%s\n", ft_convert_base("  +0", "0123456789", "0123456789"));

	printf("\n--ex05--\n\n");

	char *s1;
	char *s2;
	char **words;
	s1 = "asdf2439#85723RETV#WYWER5w%^YW#$%6";
	s2 = "";
	words = ft_split(s1, s2);
	printf("address : %p\n", words);
	if (!*words) printf("(blank)\n");
	while (*words)
		printf("%s\n", *(words++));
	printf("\n");
	s1 = "asdf2439#85723RETV#WYWER5w%^YW#$%6";
	s2 = " ";
	words = ft_split(s1, s2);
	printf("address : %p\n", words);
	if (!*words) printf("(blank)\n");
	while (*words)
		printf("%s\n", *(words++));
	printf("\n");
	s1 = "";
	s2 = "";
	words = ft_split(s1, s2);
	printf("address : %p\n", words);
	if (!*words) printf("(blank)\n");
	while (*words)
		printf("%s\n", *(words++));
	printf("\n");
	s1 = "    ! asf as!adg asdf asf    asdf     ";
	s2 = " !";
	words = ft_split(s1, s2);
	printf("address : %p\n", words);
	if (!*words) printf("(blank)\n");
	while (*words)
		printf("%s\n", *(words++));
	printf("\n");
	s1 = " hi!my name!   is soon!hyung.";
	s2 = " ";
	words = ft_split(s1, s2);
	printf("address : %p\n", words);
	if (!*words) printf("(blank)\n");
	while (*words)
		printf("%s\n", *(words++));
	printf("\n");
	s1 = "                          ";
	s2 = " !";
	words = ft_split(s1, s2);
	printf("address : %p\n", words);
	if (!*words) printf("(blank)\n");
	while (*words)
		printf("%s\n", *(words++));
	printf("\n");
}
