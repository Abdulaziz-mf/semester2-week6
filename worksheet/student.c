#include <stdio.h>
#include <stdlib.h>

int totalmarks(int *array,int count){
    int sum = 0;

    for (int i = 0; i < count; i++){
        sum += array[i];
}   
    return sum;
}
int average(int *array, int count){
    float average = 0;
    int sum = totalmarks(array, count);
    average = sum/count;
    return average;
}
int maximum(int *array, int count){
    int max = array[0];
    for (int i = 0; i < count; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}
int minimum(int *array, int count){
    int min = array[0];
    for (int i = 0; i < count; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}


int main(void){
    FILE *fp;
    int *marks;
    int count;
    marks = calloc(count,sizeof(int));
    char buffer[100];
    fp = fopen("marks.txt","r");
    while(fgets(buffer,sizeof(buffer),fp) != NULL){
        sscanf(buffer, "%d", &marks[count]);
        count++;
    
    }
    printf("%d\n",totalmarks(marks,count));
    printf("%d\n",average(marks,count));
    printf("%d\n",maximum(marks,count));
    printf("%d\n",minimum(marks,count));

    
}