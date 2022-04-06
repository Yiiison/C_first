#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	int i ,j;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= i;j++)
			printf("%d*%d=%-4d", j, i, i * j);
		if (i == n)
			printf("\n");
		}
	return 0;
}
//
//#include <stdio.h> 
//
//int main(void)
//{
//    int n;
//    scanf("%d", &n);
//    int i, j;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= i; j++)
//            printf("%d*%d=%-4d", j, i, i * j);
//        puts("");
//    }
//
//    return 0;
//}