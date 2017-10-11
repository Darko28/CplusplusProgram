#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM 4

struct Student {
		unsigned ID;
		char szName[20];
		float fGPA;
};

Student MyClass[NUM] = {
		{ 1234, "Tom", 2.78 },
		{ 1235, "jane", 2.99 },
		{ 1233, "mac", 3.91 },
		{ 1221, "zha", 3.21 }
};

int compareID(const void *elem1, const void *elem2)
{
		Student *ps1 = (Student *) elem1;
		Student *ps2 = (Student *) elem2;
		return ps1->ID - ps2->ID;
}

int compareName(const void *elem1, const void *elem2)
{
		Student *ps1 = (Student*) elem1;
		Student *ps2 = (Student*) elem2;
		return strcmp(ps1->szName, ps2->szName);
}

int main()
{
		int i;
		qsort(MyClass, NUM, sizeof(Student), compareID);
		for (i=0; i<NUM; i++)
		{
				printf("%s", MyClass[i].szName);
				printf("%d ", MyClass[i].ID);
		}
		printf("\n");
		qsort(MyClass, NUM, sizeof(Student), compareName);
		for (i=0; i<NUM; i++)
				printf("%s ", MyClass[i].szName);
		printf("\n");
		return 0;
}
