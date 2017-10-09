#include <stdio.h>

void BubbleSort(int *pa, int nNum)
{
	for (int i = nNum - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (pa[j] > pa[j+1])
			{
				int nTmp = pa[j];
				pa[j] = pa[j+1];
				pa[j+1] = nTmp;
			}
}

#define NUM 5

int main()
{
	int an[NUM] = {5, 4, 8, 2, 1};
	BubbleSort(an, NUM);
	for (int i = 0; i < NUM; i++)
			printf("%d\n", an[i]);

	return 0;
}
