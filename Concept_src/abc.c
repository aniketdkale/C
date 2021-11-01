#include<stdio.h>

int x = 51;
int y;

void fun()
{
	int no = 10;
	int *p = &no;
	no = no +1;
	printf("value of no %d \n", no);
	printf("address of no %lu \n", p);
	printf("size of p %d \n", sizeof(p) );
	printf("value of no %lu \n", *p);
}

int main()
{
	int i = 21;
	printf("Jay Ganesh\n");
	fun();
	return 0;
}
