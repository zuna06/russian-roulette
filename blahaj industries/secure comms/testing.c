#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *key = malloc(20);
    char temp[20];
    char conf[20];
    for(int i = 0; i < 5; i++) {
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



    return 0;
}