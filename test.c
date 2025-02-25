#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlen(char *str);

int main(void)
{
	printf("strlen(\"hello world\\n\") -> %ld\nstrlen(\"\") -> %ld\nft_strlen(\"hello world\\n\") -> %ld\nft_strlen(\"\") -> %ld\n",strlen("hello world\n"), strlen(""), ft_strlen("hello world\n"), ft_strlen(""));
	return 0;
}
