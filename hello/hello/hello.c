#include <stdio.h>
#pragma pack(1)
struct emp
{
	char sec;
	short int no;
	int id;
	float sal;
	double ro;
};
int main()
{
	struct emp A={100,'A',12,5000.00};
    int size=sizeof(struct emp);
	printf("emp id is:%d\nemp sec is:%c\nemp no is:%d\nemp sal is:%f\n",A.id,A.sec,A.no,A.sal);
	printf("total size emp:%d\n",sizeof(struct emp));
}