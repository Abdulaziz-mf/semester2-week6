#include <stdio.h>
#include <stdlib.h>


void reverse_array(int n, int *array){
  int temp;
  for (int i = 0; i<n/2; i++){
    temp = array[i];
    array[i] = array[n-i-1];
    array[n-i-1] = temp;
  }
}
int main(void){
  int *array;
  int n = 6;
  array = calloc(n,sizeof(int));
  for(int i = 0; i <n; i++){
    array[i] = i + 2;
  }
  reverse_array(n,array);
  
  for(int i = 0; i <n; i++){
    printf("%d ",array[i]);
  }
  printf("\n");

}