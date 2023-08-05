//
// review before I start doing game programming
//

#include <stdio.h>

int main(){

    char intial;
    float temp;
    float converted;

    printf("Convert from fahrenheit or celcius? [F/c]");
    scanf("%c", &intial);

    printf("Enter temp: ");
    scanf("%f", &temp);

    if (intial == 'c' | intial == 'C') {
        converted = ((9/5) * temp) + 32;
    } else {
        converted = (temp - 32) * (5/9);
    }

    printf("Converted temperature: %f", converted);

    return 0;
}