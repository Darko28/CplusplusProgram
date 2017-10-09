#include <stdio.h>

int main()
{
	int nHeight, nWidth;
	printf("Please enter the height: \n");
	scanf("%d", &nHeight);
	printf("please enter the width:\n");
	scanf("%d", &nWidth);
	printf("The area is: %d\n", nHeight * nWidth);
	
	printf("%d, %d\n", nHeight, nWidth);

	char c;
	int n;
	printf("enter one char and one number.\n");
	scanf("%c,%d", &c,&n);
	printf("%c,    %d\n", c,n);
}
