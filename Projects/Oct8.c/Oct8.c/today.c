/*
* today
*/

#include <stdio.h>
#include <stdlib.h>

int ans;
int calPower(int base, int pow);

main(){
	int x,y;

	printf("enter x ");
	fflush(stdin);
	scanf("%d", &x);

	printf("enter y ");
	fflush(stdin);
	scanf("%d", &y);
	
	ans=calPower(x,y);
	printf("\n\n\n%d the power of %d is %d ",x,y,ans);
	printf("\n\n\n");
	system("pause");

}

int calPower(int base, int pow)
{
	int results, i;

	if(pow==0)
	{
		results=1;
	}
	else if (pow==1)
	{
		results=base;
	}
	else
	{
		results=base;
		for( i=2;i<=pow;i++)
		{
			results*=base;
		}
	}

	return results;
}
