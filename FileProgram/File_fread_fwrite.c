#include <stdio.h>
#include <string.h>

struct Student {
		char szName[30];
		unsigned nId;
		short nGender;
		short nBirthYear, nBirthMonth, nBirthDay;
		float fGPA;
};

int main()
{
		FILE *fpSrc, *fpDest;
		struct Student Stu;
		fpSrc = fopen("students.txt", "rb");
		if (fpSrc == NULL)
		{
				printf("Failed to open source file.\n");
				return 0;
		}

		fpDest = fopen("student4Binary.txt", "wb");
		if (fpDest == NULL)
		{
				printf("Destination file open failure.\n");
				return 0;
		}

		char szName[30], szGender[30];
		int nId, nBirthYear, nBirthMonth, nBirthDay;
		float fGPA;

		while (fscanf(fpSrc, "%s%d%s%d%d%d%f", szName, &nId, szGender, &nBirthYear, &nBirthMonth, &nBirthDay, &fGPA) != EOF)
		{
				strcpy(Stu.szName, szName);
				Stu.nId = nId;
				if (szGender[0] == 'f')
						Stu.nGender = 0;
				else
						Stu.nGender = 1;
				Stu.nBirthYear = nBirthYear;
				Stu.nBirthMonth = nBirthMonth;
				Stu.nBirthDay = nBirthDay;
				Stu.fGPA = fGPA;
				
				fwrite(&Stu, sizeof(Stu), 1, fpDest);
		}

		fclose(fpSrc);
		fclose(fpDest);

		fpSrc = fopen("student4Binary.txt", "rb");
		if (fpSrc == NULL)
		{
				printf("Source file open failure.\n");
				return 0;
		}

		fpDest = fopen("student2Binary", "wb");
		if (fpDest == NULL)
		{
				printf("Destination file open failure.\n");
				return 0;
		}

		while (fread(&Stu, sizeof(Stu), 1, fpSrc))
		{
				if (Stu.nBirthYear >= 1985)
						fwrite(&Stu, sizeof(Stu), 1, fpDest);
		}

		fclose(fpSrc);
		fclose(fpDest);

		return 0;
}
