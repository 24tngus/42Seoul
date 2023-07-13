#include <stdio.h>
#include <string.h>

extern int ft_count_if(char** tab, int length, int (*f)(char*));

int	func(char* str) {
	return strcmp(str, "abc");
}

int main() {
	char* tab[3] = {"hello", "world", "bye"};
	printf("답 3 : %d\n", ft_count_if(tab, 3, &func));

	char* tab2[3] = {"hello", "world", "abc"};
	printf("답 2 : %d\n", ft_count_if(tab2, 3, &func));

	char* tab3[3] = {"abc", "abc", "abc"};
	printf("답 0 : %d\n", ft_count_if(tab3, 3, &func));
	
	return 0;
}
