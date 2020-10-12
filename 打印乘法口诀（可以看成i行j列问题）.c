//打印乘法口诀（可以看成i行j列问题）
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)//i表示有i行
	{
		int j = 0;
		for (j = 1; j <= 9; j++)//j表示有j列
		{
			if (j <= i)
			{
				printf("%dx%d=%-2d ",i,j,i*j);//-2d中的2表示占两位，-表示向左对齐
			}
		}
		printf("\n");
	}
	return 0;
}