#include <iostream.h>
#include <string.h>

class CStudent
{
public:
	CStudent(char *n, int a);
	~CStudent();

private:
	char *name;
	int age;
};
CStudent::CStudent(char *n, int a)
:age(a)
{
	int nLen = strlen(n);
	name = new char[nLen+1];
	strcpy(name,n);
	name[nLen] = '\0';
}
CStudent::~CStudent()
{
	delete[] name;
}

class CTeacher
{
public:
	CTeacher(char *tn, int ta);
	~CTeacher();

	void SetStuAge(int a);
	
private:
	char *name;
	int age;

	CStudent stu;
};
CTeacher::CTeacher(char *tn, int ta)
:age(ta)
{
	int nLen = strlen(tn);
	name = new char[nLen+1];
	strcpy(name,tn);
	name[nLen] = '\0';
}
CTeacher::~CTeacher()
{
	delete[] name;
}

void CTeacher::SetStuAge(int a)
{
	stu.age = a;
}

void main()
{
	CStudent stu("张三",25);
	CTeacher tea("李四",26);
}
