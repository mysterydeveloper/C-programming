#include <stdio.h>
#include <stdlib.h>

main(){
	int arr [10]= {83,15,43,54,34,87,67,45,93,51};
	int arr2 [10];
	int i,j,*p,*p2;
	int lowest=99999,lowestcount;
	p = arr;
	for ( i = 0; i < 10; i++ )
	{
		printf("enter number %d: ",i+1);
		scanf("%d", &arr[i] );
	} 
	printf( "Array values using pointer\n");
	for ( i = 0; i < 10; i++ )
	{
		printf("%d ",  *(p + i) );
	}
	
	 p2=arr2;
	for ( j = 0; j < 10; j++ )
    {
		lowest=9999;
		for(i=0;i<10;i++){
			if(arr[i]<lowest){
				lowest=arr[i];
				lowestcount=i;
			}	
		}
		arr[lowestcount]=9999;
		arr2[j]=lowest;
	}
	printf("\n\narray sorted: ");
	for(i=0;i<10;i++){
		printf(" %d ",*(p2 + i));
	}
	printf("\n\n");
	system("pause");
}