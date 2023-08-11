
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


unsigned long int fsize; 
extern FILE *file;

void chartobin(char val[]) {
    
    char buffer[8];
    int buff = atoi(val);
    //int bin = atoi(buffer);
    printf("%s\t", buff);
}

void conversion(char fpath[], char key[]) {

    file = fopen(fpath, "ab+");

    fseek(file, 0L, SEEK_END);
    fsize = ftell(file);
    rewind(file);

    char data[fsize];
    char ch;
    char test[fsize];

    for(int i = 0; i < fsize; i++) {
        ch = fgetc(file);
        data[i] = ch;
    }
    fclose;
    remove(fpath);
    file = fopen(fpath, "ab+");
    
    char buffer[10] = "data";
    printf("%d", atoi(buffer));


    for(int i = 0; i < sizeof(data); i++) {
        data[i] = (char)(((int)data[i])^(int)(key));
        char buffer[10] = data[i];
        printf("%d", atoi);
        chartobin(buffer);
        data[i] = chartobin((int)data[i]);
        printf("%d", data[i]);
    }

    //fwrite(data, sizeof(data[0]), sizeof(data), file);
    fclose(file);
}