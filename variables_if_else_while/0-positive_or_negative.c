#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) 

{
	
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* your code goes there */

	if (n > 0){
	printf("%d is postive\n",n);}
	else if (n==0){
		printf("%d is zero\n",n);}
	else {
		printf("%d is negative\n",n);}
	return (0);
}

