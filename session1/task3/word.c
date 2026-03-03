#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    int word =0;
    char buffer[100];
    int inword =0;
    int line =0;
    int characters = 0;



    FILE *fp;
    fp = fopen("poem.txt","r");
    if (fp == NULL){
        printf("ERROR");
        return 1;
    }
    while (fgets(buffer,sizeof(buffer),fp)!= NULL){
        printf("%s\n",buffer);
        line++;
        int length = strlen(buffer);
        characters += length;
         for (int i = 0; i < length; i++) {
            if (!isspace((unsigned char)buffer[i]) && inword == 0) {
                word++;
                inword = 1;
            } else if (isspace((unsigned char)buffer[i])) {
                inword = 0;
            }
        }
    }
    printf("Lines: %d\n", line);
    printf("Words: %d\n", word);
    printf("Characters: %d\n", characters);
    fclose(fp);

    return 0;
}
