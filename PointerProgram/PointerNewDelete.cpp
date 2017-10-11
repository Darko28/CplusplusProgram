#include <stdio.h>

int main()
{
	int *pn;
	pn = new int;
	*pn = 5;

	int i = 5;
	pn = new int[i*20];
	pn[0] = 20;

	pn = new int[20000];
	if (pn == NULL)
			printf("storage allocate failed\n");
	else
			printf("internal storage allocate success.\n");

	delete pn;

	int *p = new int[20];
	p[0] = 1;
	delete [] p;

	return 0;
}
