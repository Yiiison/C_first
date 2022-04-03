#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 1,s=1;
//	int n;
//	scanf("%d", &n);
//	//遍历
//	while (i < n)
//	{
//		s *= 10;
//		i++;
//	}
//	printf("%d", s);
//	i = s;
//	while (i < s * 10) 
//	{
//		int t = i, sum = 0;
//		while (t > 0)
//		{
//			int p = 1, j = 0;
//			int d = t % 10;
//			t /= 10;
//			for(j<n;p*=d,j++)
//				printf("")
//		}
//	}
//	return 0;
//}
#include <stdio.h>

int main()

{

	printf("输出水仙花数：\n");

	int i = 100;

	for (; i < 1000; i++) {

		int num_0 = i % 10;

		int num_1 = i / 10 % 10;

		int num_2 = i / 10 / 10 % 10;

		if (i == (num_0 * num_0 * num_0 + num_1 * num_1 * num_1 + num_2 * num_2 * num_2))

			printf("%d\t", i);

	}

	return 0;

}