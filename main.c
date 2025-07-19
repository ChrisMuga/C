#include <stdio.h>
#include <stdlib.h>

int main() {
	int p;

	p = 1000;
	int *q;

	// Printing the pointer/address of a variable
	printf("%p\n", &p);
	// Printing and integer variable
	printf("%d\n", p);
	// q takes the address of p;
	q = &p;
	// Dereferencing p (1000) and re-assigning it to the new value (3000)
	*q = 3000;
	printf("%d\n", *q);

	return 0;
}
