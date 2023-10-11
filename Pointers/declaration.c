#include <stdio.h>

int main(void) {
	// your code goes here
	int var =10;
	int *a;
	a =&var;
	printf("value of a = %d",a);
	printf("\nvalue of var = %d",var);
	printf("\nvalue of &a = %d",&a);
	printf("\nvalue of *a = %d",*a);
	return 0;
}
