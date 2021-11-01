#include <stdio.h>

int Addition(int, int);
int main()
{
	int x = 10, y = 11;
	int ret = 0;

	ret = Addition(x,y);

	printf("Addition is : %d",ret);

	return 0;
}

int Addition(int no1, int no2)
{
	int ans = 0;
	
	ans = no1 + no2;
	
	return ans;
}
