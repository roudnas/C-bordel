#include<stdio.h>

int main() {
//illegal af
	char karel[] = "Karel";
	int sizeOfKarel = sizeof(karel)/sizeof(*karel);
	printf("%d\n", sizeOfKarel);
	return 0;

}
