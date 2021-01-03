#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main() {
 const int sest = 6; 
 int age; 
 int averageDeathAge = 85;
 
 FILE *pTextak = fopen("karel.txt", "w");
  fprintf(pTextak,"Hex soucet (%p, %p) \n vysledek: %p", &sest, &averageDeathAge, &sest + &averageDeathAge);
 fclose(pTextak);
 
 printf("The constant is: %d \n It's address is: %p \n", sest, &sest);
 printf("Please enter your age: ");
 
 if (scanf("%d", &age) != 1) {
   printf("Bad input!");
   return 0;
 }

 if (age > 0 && age < averageDeathAge) {
   printf("Congrats, you're expected to live another %d years!", averageDeathAge - age);
 	return 0;
 } else if (age < 150) {
   printf("Oh oh, SMRT");
   return 0;
 }
 
}
