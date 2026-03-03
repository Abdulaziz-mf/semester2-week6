#include <stdio.h>
int main(void){
    FILE *fp;
    fp = fopen("textt.txt","r");
    if (fp == NULL){
        printf("ERROR");
        return 1;
    }
    int x;
    fscanf(fp,"%d",&x);
    printf("Numnber: %d\n",x);
    return 0;
}
