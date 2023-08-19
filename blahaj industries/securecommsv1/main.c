#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
//#include "encryption.c"


int main(int argc, char *argv[]) {

    printf("-------------------------------------\n");
    printf("GOAT Secure Comms | Blahaj Industries\n");
    printf("-------------------------------------\n");
    printf("\n\n");
    

    char key[16];
    char temp[10];
    char header[4];
    FILE *inFile;

    printf("How To Use:\n");
    printf("{main} [m]odify/[n]ew infile outfile\n");
    printf("Example: main m in.txt out.txt\n");

    printf("Would you like to modify an existing file or create a new message? [M/n]");
    //fgets(option, 1, stdin);
    printf("%c", *argv[1]);

    //scanf("%c", &option);

    printf("\n\n");
    
    if (*argv[1] == 109 | *argv[1] == 77) {

        inFile = fopen(argv[2], "r");
        fread(header, 1, 4, inFile);

        printf("%s\n", header);


    }
    



    return 0;
}