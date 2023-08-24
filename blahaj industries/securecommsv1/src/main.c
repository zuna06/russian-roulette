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
    FILE *outFile;

    printf("How To Use:\n");
    printf("{main} [m]odify/[n]ew /path/to/infile /path/to/outfile\n");
    printf("Example: main m in.txt out.txt\n");

    printf("Would you like to modify an existing file or create a new message? [M/n]");
    

    if (*argv[1] == 109 | *argv[1] == 77) {
        
        if(access(argv[2], F_OK) == 0 && access(argv[3], F_OK) == 0) { //check if infile and outfile exist
            inFile = fopen(argv[2], "r");
            fread(header, 1, 4, inFile);

            printf("%s\n", header);
        } else {
            printf("Files don't exist");
            return 1;
        }
    }
    



    return 0;
}