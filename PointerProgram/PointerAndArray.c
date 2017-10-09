#include <stdio.h>

int main()
{
	int an[200];
	int *p;
	p = an;
	*p = 10;
	*(p + 1) = 20;
	p[0] = 30;
	p[4] = 40;

	for (int i = 0; i < 10; i++)
		*(p+i) = i;
	p++;
	printf("%d\n", p[0]);
	p = an + 6;
	printf("%d\n", *p);

	return 0;
}
