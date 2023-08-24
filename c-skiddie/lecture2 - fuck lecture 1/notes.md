#Lecture 1 Notes

###Basic Structure

    #include <stdio.h> //preprocessor(s)

    void main(int argc, char argv[]) { //return type, main function

        //code....

    }
    


### Variables in C

#### Numerical:
    
    int x; //%i
    double x; //%d
    float x; //%lf
    short, int, long, long long -> 2, 2-4, 4-8, 8 bytes

##### String/Char:

    char x; //%c 
    char x[10]; //%s

    a string is an array of characters and the end of a string
    is a null terminator that tells the a function to only 
    consider everything from the start of the array to 
    right before the null terminator

##### Signed vs. Unsigned