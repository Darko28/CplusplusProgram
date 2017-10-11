#include <stdio.h>
#include <string.h>

struct Date {
		int nYear;
		int nMonth;
		int nDay;
};

struct StudentEx {
		unsigned ID;
		char szName[20];
		float fGPA;
		Date Birthday;
};

int main()
{
		StudentEx stu;
		scanf("%f", &stu.fGPA);
		stu.ID = 1234;
		strcpy(stu.szName, "Tom");
		printf("%f %d\n", stu.fGPA, stu.ID);
		stu.Birthday.nYear = 1994;
		unsigned *p = &stu.ID;

		StudentEx MyClass[50] = {
				{ 1235, "Tom", 3.9, {1984,12,31} },
				{ 1234, "fjoi", 2.2, {1991,11,12} },
				{ 1231, "fla", 2.1, {1992,10,12} },
				{ 1232, "fda", 3.2, {1992,11,11} }
		};

		MyClass[1].ID = 1267;
		MyClass[2].Birthday.nYear = 1943;
		int n = MyClass[2].Birthday.nMonth;
		scanf("%s", MyClass[0].szName);

		printf("%d %d %d %s\n", MyClass[1].ID, MyClass[2].Birthday.nYear, n, MyClass[0].szName);

	//	StudentEx *pStudent;
	//	StudentEx Stu1;
	//	pStudent = &Stu1;
	//	StudentEx stu2 = *pStudent;

		StudentEx Stu;
		StudentEx *pStu;
		pStu = &Stu;
		pStu->ID = 123456;
		pStu->fGPA = 3.33;
		printf("%d\n", Stu.ID);
		printf("%f\n", Stu.fGPA);

		//void PrintStuInfo(StudentEx Stu);
		//PrintStudentInfo(Stu1);

		void PrintStudentInfo(StudentEx *pStu);
		PrintStudentInfo(&stu);

//		delete p;
//		delete pStudent;
//		delete pStu;

		StudentEx *pStu4 = new StudentEx;
		pStu4->ID = 1234;
		delete pStu4;
		StudentEx *pStu44 = new StudentEx[20];
		pStu44[0].ID = 1235;
		delete[] pStu44;
}

void PrintStudentInfo(StudentEx *pStu)
{
		printf("%s\n", "printstuInfo");
}
