#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    FILE *fp;
    char buffer[100];
    int linecount = 0, character =0, word =0, c = 0;
    int inword;
    fp = fopen("data.txt","r");
    while(fgets(buffer,sizeof(buffer),fp) != NULL){
        linecount++;
        int length = strlen(buffer);
        character += length;
        for(int i =0; i<length; i++){
            if(!isspace((unsigned char)buffer[i]) && inword == 0){
                word++;
                inword = 1;
            }else if (isspace((unsigned char)buffer[i])){
                inword = 0;
            }
            if (buffer[i] == 'c' || buffer[i] == 'C' ){
                c++;
            }



            }
        }

    

    printf("C is %d\n",c);
    printf("Word count is %d\n", word);
    printf("Character count is %d\n", character);
    printf("Line count is %d\n", linecount);
    return 0;
}
