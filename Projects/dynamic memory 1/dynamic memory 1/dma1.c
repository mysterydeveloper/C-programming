#include <stdio.h>
#include <stdlib.h>

main(){
	 float *ptr;
	 int n,i;
	 float lowest,highest;
	 
	 scanf("%d", &n );
	 if(ptr==NULL)//error check if ptr is null
	 {
	 printf("Error! memory not allocated.");
	 exit(0);//finish program if null
	 }
	{
		fflush(stdin);//flushing so no number is carried on 
		printf("enter number %d: ",i+1);
		scanf("%f", ptr++ );//putting number entered into memory
	} 
	{
		printf("%f \n",  *(ptr + i) );
		if(i==0){//initalizing first time round eg. ptr+0 is lowest and highest
			lowest=*(ptr+i);
			highest=*(ptr+i);
		}
		else if(*(ptr+i)<lowest){//checking lowest 
			lowest=*(ptr+i);
		}
		else if(*(ptr+i)>highest){//checking highest
			highest=*(ptr+i);
		}
	}
	printf("lowest =%f \n",  lowest );// printing lowest 
	printf("highest =%f \n",  highest );//printing highes

	printf("\n\n\n");
	system("pause");
}