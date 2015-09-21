/*
* re-useable menu system
*show a number of options
* get an iput off the user
*excute some funtion
* show the menu again
*/

#include <stdio.h>
#include <stdlib.h>

int showMenu();
int getInPutForCalcPower();

main()
{
	int iChoice;
	switch(iChoice=showMenu()){
	case 1://calculate power
		getInPutForCalcPower();
		break;
	
	case 2:
		break;
	
	case 3:
		break;
	
	case 4:

		break;
	}
	printf("\n\n\t\tyou entered %d",iChoice );

	printf("\n\n\n");
	system("pause");
}//end main

int showMenu()
{
	int iChoice;

	// do stuff
	do{
		printf("\n\n\t\tnest menu ever");
		printf("\n\n\t1: do stuff");
		printf("\n\n\t2: do more stuff");
		printf("\n\n\t3: do ever more stuff");
		printf("\n\n\t4: exit");

		printf("\n\n\n\t Enter a valid choice");
		fflush(stdin);
		scanf("%d", &iChoice);
	}while(iChoice<1 || iChoice>4);
	return iChoice;
}

void getInPutForCalcPower(){
	int x,y;
	int ans;

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
int calPower(int base,int pow){
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