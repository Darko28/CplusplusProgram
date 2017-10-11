#include <stdio.h>
#include <string.h>

int main()
{
	char *p = "Tom \n";
	char szName[20];
	char *pName = szName;

	printf("1\n");
	printf("%s", pName);
	printf("2\n");
	scanf("%s", pName);
	printf(p);
	printf("%s", p);
//	printf("\n");
	printf("Name is %s\n", pName);

	return 0;
}
