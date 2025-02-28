#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

size_t ft_strlen(char *str);
char *ft_strcpy(char *dest, const char *src);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strdup(const char *s);
size_t ft_write(int fd, char *buff, size_t nbyte);
size_t ft_read(int fd, char *buff, size_t nbyte);
int main(void)
{
	size_t len;
	char *ptr;
	char dest_buffer[12];
	char input_buffer[11];

//strlen:
	printf("strlen(\"hello world\\n\") -> %ld\nstrlen(\"\") -> %ld\nft_strlen(\"hello world\\n\") -> %ld\nft_strlen(\"\") -> %ld\n\n",strlen("hello world\n"), strlen(""), ft_strlen("hello world\n"), ft_strlen(""));
//strcpy:
	printf("ft_strcpy(dest, \"\") -> %s\n",ft_strcpy(dest_buffer, ""));
	printf("ft_strcpy(dest, \"\\01\") -> %s\n",ft_strcpy(dest_buffer, "\01"));
	printf("ft_strcpy(dest, \"Hello World\") -> %s\n",ft_strcpy(dest_buffer, "Hello World"));
	printf("ft_strcpy(dest, \"Hello Wor\\0ld\") -> %s\n\n",ft_strcpy(dest_buffer, "Hello Wor\0ld"));
//strcmp:
	printf("ft_strcmp(\"\", \"\") -> %d\n", ft_strcmp("", ""));
	printf("ft_strcmp(\"y\", \"\") -> %d\n", ft_strcmp("y", ""));
	printf("ft_strcmp(\"\", \"y\") -> %d\n", ft_strcmp("", "y"));
	printf("ft_strcmp(\"yolooo\", \"\") -> %d\n", ft_strcmp("yolooo", ""));
	printf("ft_strcmp(\"\", \"yolooo\") -> %d\n", ft_strcmp("", "yolooo"));
	printf("ft_strcmp(\"bonjour\", \"bonjo\\0ur\") -> %d\n", ft_strcmp("bonjour", "bonjo\0ur"));
	printf("ft_strcmp(\"bonjo\\0ur\", \"bonjour\") -> %d\n", ft_strcmp("bonjo\0ur", "bonjour"));
	printf("ft_strcmp(\"bonjour\", \"bonjour\") -> %d\n\n", ft_strcmp("bonjour", "bonjour"));
//strdup
	ptr = ft_strdup("");
	printf("ft_strdup(\"\") -> %s\n", ptr);
	if (ptr)
		free(ptr);
	ptr = ft_strdup("Hello World");
	printf("ft_strdup(\"Hello World\") -> %s\n\n", ptr);
	if (ptr)
		free(ptr);
//write
	printf("ft_write errno -> %ld\n", ft_write(54, "yolo", 5));
	len = ft_write(1, "ft_write test", 13);
	printf(" -> %ld\n\n", len);
//read
	printf("ft_read errno -> %ld\n", ft_read(54, input_buffer, 5));
	len = ft_read(0, input_buffer, 11);
	printf("ft_read test -> %ld\n\n", len);

	return 0;
}
