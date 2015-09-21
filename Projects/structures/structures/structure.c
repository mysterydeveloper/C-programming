#include <stdio.h>
#include <stdlib.h>
#include <string.h>



 int i,k;
 int p;

struct date{
	int day;
	int month;
	int year;
};
typedef struct date DATE;
DATE d[10];
struct book{
	int bookNumber;
	char bookTitle [30];
	char author [30];
	double price; 
	DATE d;
};
typedef struct book BOOKS;
BOOKS l[10];
int temp[10];


void initalised(){
	for(p=0;p<10;p++){
		l[p].bookNumber=0;
		strcpy( l[p].bookTitle, "null");
		strcpy( l[p].author, "null");
		l[p].price=0;
		l[p].d.day=1;
		l[p].d.month=1;
		l[p].d.year=2015;
	}
}

void addbooks(){
	
	printf("how many books would you like to enter (lower than 10): ");
	scanf("%d",&k);

	for(i=0; i<k;i++){
		printf("enter book number: ");
		scanf("%d",&l[i].bookNumber);
		printf("enter book title: ");
		scanf("%s",&l[i].bookTitle);
		printf("enter book autor: ");
		scanf("%s",&l[i].author);
		printf("enter book price: ");
		scanf("%d",&l[i].price);
		printf("enter day: ");
		scanf("%d",&l[p].d.day);
		printf("enter month: ");
		scanf("%d",&l[p].d.month);
		printf("enter year: ");
		scanf("%d",&l[p].d.year);
	}
	for(i=0; i<10;i++){
	  temp[i]=l[i].bookNumber;
	}
}
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
void SortBooks(){
	qsort(BOOKS, structs_len, sizeof(struct st_ex), BOOKS);
	for(i=0; i<10;i++){
	  l[i].bookNumber=temp[i];


	}
}

main (){
	char ar_nm,bk_nm;
	int i=0,j,a,s,se;
	 int del,deletes;
	initalised();
	addbooks();
	SortBooks();

	do{
	printf("\n\n1.BOOK LIBRARY \n");
	printf("2.ADD NEW BOOK TO ARRAY\n");
	printf("3.EDIT BOOK PRICE\n");
	printf("4.SEARCH FOR BOOK\n");
	printf("5.DELETE BOOK\n");
	printf("6.QUIT\n");

	printf("\n\nEnter one of the above : ");
	scanf("%d",&j);

	 switch(j){
	 case 1://DISPLAYING ALL THE BOOKS

			printf("book number:|title       |  author         |  price        |   date \n");
			for(a=0;a<10;a++){
				 printf(" %d",l[a].bookNumber);
				 printf("%15s",l[a].bookTitle);
				 printf("%15s",l[a].author);
				 printf("%15d",l[a].price);
				 printf("%15d",l[a].d.day);
				 printf("/%d",l[a].d.month);
				 printf("/%d\n",l[a].d.year);
			}
		 break;
	 case 2://add new book to array
			printf("enter book number: ");
			scanf("%d",&l[k].bookNumber);
			printf("enter book title: ");
			scanf("%s",&l[k].bookTitle);
			printf("enter book autor: ");
			scanf("%s",&l[k].author);
			printf("enter book price");
			scanf("%d",&l[k].price);
			printf("enter day: ");
			scanf("%d",&l[k].d.day);
			printf("enter month: ");
			scanf("%d",&l[k].d.month);
			printf("enter year: ");
			scanf("%d",&l[k].d.year);
			k++;
		 break;
	 case 3://edit book price
		 printf("enter book number: ");
		 scanf("%d",&se);

		 for (s=0;s<10;s++){
			 if(l[s].bookNumber==se){
				printf("enter book price");
				scanf("%s",&l[s].price);
			 }
		 }
		 break;
	 case 4://search for book
		 printf("enter book number: ");
		 scanf("%d",&se);
		 for (s=0;s<10;s++){
			 if(l[s].bookNumber==se){
				printf("book number:|title       |  author         |  price        |   date \n");				
				printf(" %d",l[s].bookNumber);
				printf("%15s",l[s].bookTitle);
				printf("%15s",l[s].author);
				printf("%15d",l[s].price);
				printf("%15d",l[s].d.day);
				printf("/%d",l[s].d.month);
				printf("/%d\n",l[s].d.year);
			 }
		 }

		 break;
	 case 5://exit program
		
		printf("enter book number you want to delete: ");
		scanf("%d",&deletes);
		 for (del=0;del<10;del++){
			 if(l[del].bookNumber==deletes){
				l[del].bookNumber=0;
				strcpy( l[del].bookTitle, "null");
				strcpy( l[del].author, "null");
				l[del].price=0;
				l[del].d.day=1;
				l[del].d.month=1;
				l[del].d.year=2015;
			 }
		 }
		 break;
	 case 6://exit program
		 exit(0);
		 break;
	 default:
		 printf("please enter a number between 1 an 4 ");
	 }

	}while (j!=6);
   system("pause");

}