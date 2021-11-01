#include <stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
	if((iNo % 2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int ivalue = 0;
	bool bRet = false;

	printf("Enter Any Number:\n");
	scanf("%d",&ivalue);

	bRet = CheckEven(ivalue);
	if(bRet == true)
	{
		printf("Number is even\n");
	}
	else
	{
		printf("Number is not even\n");
	}
	return 0;
}