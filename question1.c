//Jerry Moyer this is my own work
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  //initialize the amount at 0
  int amount = 0;

  while(amount <= 0){
    printf("enter a positive whole number for the amount your array will hold\n");
    scanf("%d", &amount);
  }

  int * arr = (int*)calloc(amount, sizeof(int));
  for(int i = 0; i < amount; i++){
    int element = 0;
    printf("\nenter some numbers for this array:");
    scanf("%d", &element);

    //the value at the address of our starting index plus the
    //index of the element is the element
    *(arr + i * sizeof(int)) = element;
  }
  for(int i = amount -1; i >= 0; i--){
    printf("\n%d", *(arr + sizeof(int) * i));
  }
  //free our array
  free(arr);
  arr = NULL;
  return 0;
}