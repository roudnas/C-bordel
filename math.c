#include<stdio.h>
#include<math.h>
void* reverse(char*[], int);
int main(int argc, char*argv[]) {
	char* arg[sizeof(argv[1])];
	*arg = argv[1];
 	printf("%s\n",*arg);
	char* k[sizeof(argv[1])];
	k = reverse(arg, sizeof(argv[1]));	
 	printf("%s\n",*k);
	
	return 0;
}
void* reverse(char* in[], int size) {
 char* out[size];
 *out = *in;
 /*for (int i = size; i == 0; i--) {
  for (int j = 0; j < size; j++) {
   out[j] = in[i];
  } 
 }*/
 return *out;
}
