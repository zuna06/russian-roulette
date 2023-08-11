#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    printf("-------------------------------------\n");
    printf("GOAT Secure Comms | Blahaj Industries\n");
    printf("-------------------------------------\n");
    printf("\n\n");
    

    char key[16];
    char temp[10];
    char option;
    char fpath[20];
    char header[4];
    FILE *inFile;


    printf("Would you like to modify an existing file or create a new message? [M/n]");
    scanf("%c", &option);

    printf("\n\n");
    
    if (option == 109 | option == 77) {

        printf("Enter file path: ");
        scanf("%s", &fpath);
        

        inFile = fopen("./sample.txt", "r");
        fread(header, 1, 4, inFile);

        printf("%s\n", header);


    }
    



    return 0;
}