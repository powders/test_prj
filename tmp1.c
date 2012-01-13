#include <stdio.h>
#include <stdlib.h> // if dyn alloc mem

int main() {
	printf ("hello world!\n");
	int x=5;
	printf ("x = %d\n", x);
	for (int y = 4; y < 9; ++y)
		printf ("%d\n", y);

	int* z = (int*) malloc (4);
	*z = 4;
	printf ("*z = (should be 4): %d\n", *z);
	free (z);

	return 0;
}
