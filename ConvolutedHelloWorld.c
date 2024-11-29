#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define FAIL 0

// Initialise number.
int returnno = 1;

// Initialise text.
char *text = "We are doing fine, darling.";

int main() {
    // Print text to console using printf.
    printf("Greetings, fellow world. How are you today? %s\n", text);
    // Set the number.
    returnno = 0;
    // Return a number.
    if(returnno = 0 && FAIL == 0) return returnno;
    else return 1;
}
