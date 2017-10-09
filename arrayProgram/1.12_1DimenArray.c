#include <stdio.h>

#define MAX_NUM 5

int main()
{
	int i, j;
	int an[MAX_NUM];

	for (i = 0; i < MAX_NUM; i++)
		scanf("%d", &an[i]);
	for (i = 0; i < MAX_NUM; i++)
	{
		int nTmpMin = i;
		for (j = i; j < MAX_NUM; j++)
		{
			if (an[j] < an[nTmpMin])
					nTmpMin = j;
		}

		int nTmp = an[i];
		an[i] = an[nTmpMin];
		an[nTmpMin] = nTmp;
	}
	
	for (i = 0; i < MAX_NUM; i++)
			printf("%d\n", an[i]);
	
	return 0;
}
