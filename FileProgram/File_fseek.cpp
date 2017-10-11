#include <stdio.h>
#include <string.h>

#define NUM 10
#define NAME_LEN 20

struct Student {
		char szName[NAME_LEN];
		unsigned nId;
		short nGender;
		short nBirthYear, nBirthMonth, nBirthDay;
		float fGPA;
};

int main()
{
		FILE *fpSrc;
		struct Student aStu[NUM];
		fpSrc = fopen("student2.txt", "r+b");
		if (fpSrc == NULL)
		{
				printf("Failed to open the file.\n");
				return 0;
		}

		fseek(fpSrc, sizeof(Student) * 4, SEEK_SET);
		fread(aStu, sizeof(Student), 7, fpSrc);
		fseek(fpSrc, sizeof(Student) * 20, SEEK_SET);
		fwrite(aStu, sizeof(Student), 7, fpSrc);

		fclose(fpSrc);

		return 0;
}
