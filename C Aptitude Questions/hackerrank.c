#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
     int a = 12;
    double b = 4.0;
    char c[] = "is the best place to learn and practice coding!";
// Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    printf("%d\n",i+a);// Print the sum of both integer variables on a new line.
    
    printf("%0.1lf\n",d+b);// Print the sum of the double variables on a new line.
    
    strcat(s,c);// The 's' variable above should be printed first.
    printf("%s",s);
    return 0;
}