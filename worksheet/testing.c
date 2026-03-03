#include <stdio.h>

void reverse_array(int *arr, int n) {
  for (int i =0; i <n; i++){
    arr[i] = arr[n-i-1];
  }
}
int main(void){
    int array[] = {1,2,3,4,5,6};
    
}