
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d" ,&a,&b,&c);
	if (a == b&&c != a)
		printf("c");
	else if (b == c&&a != b)
		printf("a");
	else if (a==c&&a!=b)
		printf("b");

	return 0;
}