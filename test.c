#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlen(char *str);
char* ft_strcpy(char *dest, const char*src);
int ft_strcmp(const char *s1, const char *s2);

int main(void)
{
	char dest_buffer[12];

//strlen test:
	printf("strlen(\"hello world\\n\") -> %ld\nstrlen(\"\") -> %ld\nft_strlen(\"hello world\\n\") -> %ld\nft_strlen(\"\") -> %ld\n\n",strlen("hello world\n"), strlen(""), ft_strlen("hello world\n"), ft_strlen(""));
//str_cpy test:
	printf("ft_strcpy(dest, \"\") -> %s\n",ft_strcpy(dest_buffer, ""));
	printf("ft_strcpy(dest, \"\\01\") -> %s\n",ft_strcpy(dest_buffer, "\01"));
	printf("ft_strcpy(dest, \"Hello World\") -> %s\n",ft_strcpy(dest_buffer, "Hello World"));
	printf("ft_strcpy(dest, \"Hello Wor\\0ld\") -> %s\n\n",ft_strcpy(dest_buffer, "Hello Wor\0ld"));
//str_cmp:
	printf("ft_strcmp(\"\", \"\") -> %d\n", ft_strcmp("", ""));
	printf("ft_strcmp(\"y\", \"\") -> %d\n", ft_strcmp("y", ""));
	printf("ft_strcmp(\"\", \"y\") -> %d\n", ft_strcmp("", "y"));
	printf("ft_strcmp(\"yolooo\", \"\") -> %d\n", ft_strcmp("yolooo", ""));
	printf("ft_strcmp(\"\", \"yolooo\") -> %d\n", ft_strcmp("", "yolooo"));
	printf("ft_strcmp(\"bonjour\", \"bonjo\\0ur\") -> %d\n", ft_strcmp("bonjour", "bonjo\0ur"));
	printf("ft_strcmp(\"bonjo\\0ur\", \"bonjour\") -> %d\n", ft_strcmp("bonjo\0ur", "bonjour"));
	printf("ft_strcmp(\"bonjour\", \"bonjour\") -> %d\n\n", ft_strcmp("bonjour", "bonjour"));
	return 0;
}
