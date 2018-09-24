#include<stdio.h>
#include<stdlib.h>

char* substr(const char *src, int m, int n)
{

	int len = n - m;

	char *dest = (char*)malloc(sizeof(char) * (len + 1));

	for (int i = m; i < n && (*src != '\0'); i++)
	{
		*dest = *(src + i);
		dest++;
	}

	*dest = '\0';
	return dest - len;
}

int main()
{
	char src[] = "substr function Implementation";

	int m = 7;
	int n = 12;

	char* dest = substr(src, m, n);

	printf("%s\n", dest);

	return 0;
}

