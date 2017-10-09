#include <stdio.h>

void swap(int n1, int n2)
{
	int nTmp = n1;
	n1 = n2;
	n2 = nTmp;
}

void sWap(int *pn1, int *pn2)
{
		int nTmp = *pn1;
		*pn1 = *pn2;
		*pn2 = nTmp;
}

int main()
{
	int a = 5, b = 6;
	printf("%d %d\n", a, b);
	swap(a, b);
	printf("%d %d\n", a ,b);
	//sWap(a, b);
	//printf("%d %d\n", a, b);
	sWap(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}

