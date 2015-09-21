#include <stdio.h>
#include <stdlib.h>

main(){
	 float *ptr;
	 int n,i;
	 float lowest,highest;
	 	 printf("how many numbers would u like : ");//asking for the ammount of number you want
	 scanf("%d", &n );	 ptr=(float*)malloc(n*sizeof(float));//asking for the ammount of memory you need
	 if(ptr==NULL)//error check if ptr is null
	 {
	 printf("Error! memory not allocated.");
	 exit(0);//finish program if null
	 }	 for ( i = 0; i < n; i++ )//for loop asking for each number
	{
		fflush(stdin);//flushing so no number is carried on 
		printf("enter number %d: ",i+1);
		scanf("%f", ptr++ );//putting number entered into memory
	} 	ptr-=n;	for ( i = 0; i < n; i++ )//for loop for printing and checking for highest and lowest
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