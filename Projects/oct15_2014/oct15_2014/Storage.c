

#include "Storage.h"

//open a file, write to it and close it
main()
{
	FILE *fptr;

	//openfile
	fptr =fopen(FILENAME,WRITEMODE);
	if(fptr ==NULL){
		printf("\n\n\t Could not open file \n",FILENAME);
		system("pause");
		exit(0);
	}
	printf("\n\n\nread the file\n\n\n");
	fprintf(fptr,"Hello world!!!");

	//close file
	fclose(fptr);
	system("PAUSE");

	readContents();

	printf("\n\n\n\n");
	system("PAUSE");


}//end main

void readContents(){
	FILE *fptr;
	char strBuffer[MAX_COUNT + 1];

	printf("\n\n\ readcontents :\n %s \n %d", __FILE__, __LINE__);

	fptr =fopen(FILENAME,READMODE);
	if(fptr ==NULL){
		printf("\n\n\t Could not open file \n", FILENAME);
		system("PAUSE");
		exit(0);
	}
	do{
	fgets(strBuffer,MAX_COUNT,fptr);
	printf("\n From file: %s ",strBuffer);
	}while(!feof(fptr));//havent reached end of file
	
	fclose(fptr);



}