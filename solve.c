#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x_num, y_num = 0;
	int result = 0;
	scanf("%d %d", &x_num, &y_num);

	if (x_num > 0)
	{
		if (y_num > 0)
		{
			result = 1; // 1��и鿡 ����
		}
		else if (y_num < 0)
		{
			result = 4; // 4��и鿡 ����
		}
	}
	else if (x_num < 0)
	{
		if (y_num > 0)
		{
			result = 2; // 2��и鿡 ����
		}
		else if (y_num < 0)
		{
			result = 3; // 3��и鿡 ����
		}
	}
   
	printf("%d", result);

	return 0;
}