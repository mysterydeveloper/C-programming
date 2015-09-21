/*
 *calculate factorial of a number
*/
#include <stdio.h>
#include <stdlib.h>

//declare functions
int calFact(int);

void main(){
	int iNum=0, iFact;
	while (iNum!=-99)
	{
		//do while ---> get value
		do{
			printf("enter a positive number: ");
			scanf_s("%d", &iNum);
			if(iNum == -99){break;}
		}while (iNum <=0);
		
		if(iNum == -99){break;}
		//call the function calfact
		//pass it the number
		iFact=calFact(iNum); 
		//return the value
		printf("\n\n the factorial of %d is %d",iNum,iFact);
		printf("\n\n ");
	}//end while (iNum!=-99)
	system("pause");
	
}//end of main

int calFact(int theNumber)
{
	int iAnswer;

	iAnswer=theNumber;
	while(theNumber>1)
	{
		--theNumber;
		iAnswer=iAnswer*theNumber;
	}

	return(iAnswer);
}//end of calFact