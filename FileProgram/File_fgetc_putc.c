#include <stdio.h>

int main(int argc, char* argv[])
{
		FILE *fpSrc, *fpDest;
		fpSrc = fopen(argv[1], "rb");
		if (fpSrc == NULL)
		{
				printf("Source file open failure.");
				return 0;
		}

		fpDest = fopen(argv[2], "wb");
		if (fpDest == NULL)
		{
				printf("Destination file open failure.");
				return 0;
		}

		int c;
		
		//printf("%d\n", fgetc(fpSrc));
		//printf("\n");

		while ((c = fgetc(fpSrc)) != EOF)
				fputc(c, fpDest);

		fclose(fpSrc);
		fclose(fpDest);

		return 0;
}
