#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlen(char *str);
char* ft_strcpy(char *dest, const char*src);

int main(void)
{
	char dest_buffer[12];

//strlen test:
	printf("strlen(\"hello world\\n\") -> %ld\nstrlen(\"\") -> %ld\nft_strlen(\"hello world\\n\") -> %ld\nft_strlen(\"\") -> %ld\n\n",strlen("hello world\n"), strlen(""), ft_strlen("hello world\n"), ft_strlen(""));
//str_cpy test:
	printf("ft_strcpy(dest, \"\") -> %s\n",ft_strcpy(dest_buffer, ""));
	printf("ft_strcpy(dest, \"\\01\") -> %s\n",ft_strcpy(dest_buffer, "\01"));
	printf("ft_strcpy(dest, \"Hello World\") -> %s\n\n",ft_strcpy(dest_buffer, "Hello Wolrd"));
	return 0;
}
