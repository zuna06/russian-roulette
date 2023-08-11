#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
//#include "consts.h"

FILE *file;
extern unsigned long int fsize;
extern void conversion();
extern int chartobin();

int main() {

    printf("-----------------------------------------------\n");
    printf("PirateBay Secure Messaging || Blahaj Industries\n");
    printf("-----------------------------------------------\n");

    //sleep(3);
    printf("Would you like to type a new message or encrypt an existing message? [N/e] ");
    char option;
    scanf("%c", &option);

    char *key = malloc(20);
    char temp[20];
    char conf[20];
    char fpath[100];

    if (tolower(option) == 110 || option == 0) {
        
        printf("Enter file destination: ");
        scanf("%s", &fpath);
        sleep(1);
        printf("-----------------------------------------------\n");
        for(int i = 0; i < 5; i++){
            printf("Enter private key (20 characters max): ");
            scanf("%s", &temp);
            printf("Confirm key: ");
            scanf("%s", &conf);
            if(strcmp(temp, conf) == 0) {
                key = conf;
                break;
            } else {
                printf("Keys do not match!!");
            }
        }


        sleep(1);
        conversion(fpath, key);


    } else {
        printf("Enter file location: ");
        scanf("%s", &fpath);

    }





    free(key);
    printf("\nClick enter to exit.....\n");
    getchar();

    return 0;
}