/*
* structure 
* whats is the difference between pass by value and pass by reference?
*
*pass by value-pass a copy of the data to the function- a change in the function does not affect the original
* pass by refernce- pass the memory adress of the data to the function- a change in the function is a change in the original 
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 15

//variable type struct myCars
struct myCars
{
	char manufactor[MAX_LEN+1];// 16 chars
	char model[MAX_LEN+1];//16 chars (16 * 1 byte)
	int price;// 4 bytes
			//total 3600 bytes
};

/*
*pass by value require 36 bytes
* pass by reference requires 4 bytes
*/

//pass a pointer to struct myCars variable 
void InputFuntion(struct myCars *);
void outputFuntion(struct myCars *);

int i;

main()
{
	struct myCars oneCar, twoCar;

	//input
	InputFuntion(&oneCar);
	InputFuntion(&twoCar);
	//output
	outputFuntion(&oneCar);
	outputFuntion(&twoCar);

	printf("\n\n\n");
	system("pause");
}//end main
void InputFuntion(struct myCars *tempCar)
{
	printf("\nenter manufacturer: ");
	fflush(stdin);
	gets(tempCar->manufactor);
	printf("\nenter model: ");
	fflush(stdin);
	gets(tempCar->model);
	printf("\nenter price: ");
	fflush(stdin);
	scanf_s("%d",&tempCar->price);
	
}// end InputFuntion

void outputFuntion(struct myCars *tempCar)
{
	printf("\nthe car %s by %s costs %d",tempCar->manufactor,tempCar->model,tempCar->price);
}