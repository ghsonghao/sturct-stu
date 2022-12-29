#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 20;
//	struct Stu s1 = { "张三",20,"22900122" };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 20;
	struct Stu s1 = { "张三",20,"22900122" };
	struct Stu*ps = &s1;
	printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);
	printf("%s\n", (*ps).id);
	return 0;
}