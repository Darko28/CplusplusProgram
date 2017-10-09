#include <stdio.h>

int main()
{
	int *pn1, *pn2;
	int n = 4;
	char *pc1, *pc2;
	pn1 = (int *)100;
	pn2 = (int *)200;
	printf("%d\n", pn2 - pn1);

	pc1 = (char *)pn1;
	pc2 = (char *)pn2;
	printf("%d\n", pc1 - pc2);
	printf("%d\n", (pn2 + n) - pn1);

	int *pn3 = pn2 + n;
	printf("%d\n", pn3 - pn1);
	printf("%ld\n", (pc2 - 10) - pc1);

	return 0;
}
