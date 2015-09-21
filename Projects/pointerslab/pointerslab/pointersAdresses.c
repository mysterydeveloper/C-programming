#include <stdio.h>
#include <stdlib.h>

main(){
	char c ='a';
	int inum = 1;
	long lnum = 123456;
	float fnum = 125.6;
	double dnum = 1234.56 ;
	printf("variable c='a' has the adresss of %p\n\n", c, &c);
	printf("variable inum=%d has the adresss of %p\n\n", inum, &inum);
	printf("variable lnum=%d has the adresss of %p\n\n", lnum, &lnum);
	printf("variable fnum=%d has the adresss of %p\n\n", fnum, &fnum);
	printf("variable dnum=%d has the adresss of %p\n\n", dnum, &dnum);
	system("pause");
}