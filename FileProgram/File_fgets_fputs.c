#include <stdio.h>

#define NUM 200

int main()
{
		FILE *fpSrc, *fpDest;
		fpSrc = fopen("students.txt", "r");
		if (fpSrc == NULL)
		{
				printf("source file open failure.\n");
				return 0;
		}

		fpDest = fopen("student2.txt","w");
		if (fpDest == NULL)
		{
				printf("dest file open failure.\n");
				return 0;
		}

		char szLine[NUM];
		while (fgets(szLine, NUM-1, fpSrc))
		{
				fputs(szLine, fpDest);
		}

		fclose(fpSrc);
		fclose(fpDest);

		return 0;
}
