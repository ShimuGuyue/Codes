#include <stdio.h>
int main()
{
	char temp[5][3];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			temp[i][j] = 'X';
		}
	}
	int n;
	scanf("%d", &n);
	char b[105];
	scanf("%s", &b);
	for (int i = 0; i < n; i++)
	{
		char a[5][3];
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 3; y++)
			{
				a[x][y] = temp[x][y];
			}
		}
		if (b[i] == '0')
		{
			a[1][1] = '.';
			a[2][1] = '.';
			a[3][1] = '.';
		}
		if (b[i] == '1')
		{
			a[0][0] = '.';
			a[0][1] = '.';
			a[1][0] = '.';
			a[1][1] = '.';
			a[2][0] = '.';
			a[2][1] = '.';
			a[3][0] = '.';
			a[3][1] = '.';
			a[4][0] = '.';
			a[4][1] = '.';
		}
		else if (b[i] == '2')
		{
			a[1][0] = '.';
			a[1][1] = '.';
			a[3][1] = '.';
			a[3][2] = '.';
		}
		else if (b[i] == '3')
		{
			a[1][0] = '.';
			a[1][1] = '.';
			a[3][0] = '.';
			a[3][1] = '.';
		}
		else if (b[i] == '4')
		{
			a[0][1] = '.';
			a[1][1] = '.';
			a[3][0] = '.';
			a[3][1] = '.';
			a[4][0] = '.';
			a[4][1] = '.';
		}
		else if (b[i] == '5')
		{
			a[1][1] = '.';
			a[1][2] = '.';
			a[3][0] = '.';
			a[3][1] = '.';
		}
		else if (b[i] == '6')
		{
			a[1][1] = '.';
			a[1][2] = '.';
			a[3][1] = '.';
		}
		else if (b[i] == '7')
		{
			a[1][0] = '.';
			a[1][1] = '.';
			a[2][0] = '.';
			a[2][1] = '.';
			a[3][0] = '.';
			a[3][1] = '.';
			a[4][0] = '.';
			a[4][1] = '.';
		}
		else if (b[i] == '8')
		{
			a[1][1] = '.';
			a[3][1] = '.';
		}
		else if (b[i] == '9')
		{
			a[1][1] = '.';
			a[3][0] = '.';
			a[3][1] = '.';
		}

		int row_count = 0;
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 3; y++)
			{
				printf("%c", a[x][y]);
			}
			if (i < n - 1)
			{
				printf(".");
			}
			printf("\n");
		}
	}

	for (int x = 0; x < 5; ++x)
	{
		for (int i = 0; i < n; ++i)
		{
			char a[5][3];
			char c = b[i];
			/**
			 * 这里写那一大堆 if-else
			 */
			for (int y = 0; y < 3; ++y)
			{
				printf("%c", a[x][y]);
			}
			if (i < n - 1)
				printf(".");
		}//一行输出完之后再一起换行
		printf("\n");
	}

	return 0;
}

//			 row_count++;
//            if (row_count % 3 == 0) {
//	}row_count++;
//	if (row_count % 5 == 0 && i!= n - 1) {  // 每5行（一个数字图案结束）且不是最后一个数字时添加额外换行
//
//			}
