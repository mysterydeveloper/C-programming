#include <stdio.h>
#include <stdlib.h>

main(){
	float *ptr;
	int max=0,i;
	char ask;
	ptr=(float*)malloc(max*sizeof(float));//asking for the ammount of memory you need
	if(ptr==NULL)//error check if ptr is null
	{
	printf("Error! memory not allocated.");
	exit(0);//finish program if null
	}
	do 
	{
		fflush(stdin);//flushing so no number is carried on 
		ptr=(float*)realloc(ptr, ((max+1)*sizeof(float)));
		printf("enter number: ");
		scanf("%f", ptr++ );//putting number entered into memory
		max++;
		fflush(stdin);//flushing so no number is carried on 
		printf("would you like to continue y/n: ");//promting to see if they want to continue
		scanf("%c",&ask  );
	}while(ask=='y' ||ask=='Y' );
	ptr-=max;
	for ( i = 0; i < max; i++ )//for loop for printing out all numbers entered
	{
		printf("%f \n",  *(ptr + i) );
	}

system("pause");

}