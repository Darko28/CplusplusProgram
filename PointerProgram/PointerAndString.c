#include <stdio.h>
#include <string.h>

int main()
{
	char *p = "Tom \n";
	char szName[20];
	char *pName = szName;

	scanf("%s", pName);
	printf(p);
	printf("\n");
	printf("Name is %s\n", pName);

	return 0;
}
