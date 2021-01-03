#include<stdio.h>

int* returnAdd(int*);
void* changeNum(float*);

int main(int argc, char *argv[]) {
	int x = 10;
	printf("%d\n", x);
	float y;
	changeNum(&y);
	printf("%f", y);
	return 0;
}

int* returnAdd(int *numA) {
	return numA;
}
void* changeNum(float* pfloat) {
	*pfloat = 3.0;
}
