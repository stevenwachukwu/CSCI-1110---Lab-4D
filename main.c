/*This program evaluates either my first function (whenever x is less than or equal to 1) or my second function (whenever x is greater than 1) and returns the result. Also, this programs runs through a while loop to continue this program if necessary.*/

#include <stdio.h> //regular library
#include <math.h> //math library
#define e 2.71828183

double f1 (double x) {
return (pow(x,2)*sin(x)+(pow(e,-x)));
} //first prototype whenever x is less than or equal to 1

double f2 (double x) {
return (pow(x,3)*cos(x)-log(x));
} //second prototype whenever x is greater than 1

int main (void) {
double X; //variable for the input x
double D; //this helps the program to decide whether to continue or to quit the program
double sin1; //this is used as a variable and also a function call (whenever x is less than or equal to 1)
double cos2; //this is used as a variable and also a function call (whenever x is greater than 1)
  
printf("\nA sine function for small x, a cosine function for x>1.\n");
printf("Enter x:"); //user inputs whatever number they like for x
scanf("%lg", &X); //the program takes in the user's input for x
  
if (X<=1.0) {
sin1=(pow(X,2)*sin(X)+(pow(e,-X))); //function call of the first prototype
printf("f(%g) = %g", X, sin1); //printout of the first function
} //if the user inputs a number less than or equal to 1 then the program will follow this first part of the if else statement
else {
cos2=(pow(X,3)*cos(X)-log(X)); //function call of the second prototype
printf("f(%g) = %g", X, cos2); //printout of the second function 
} //if the user inputs a number greater than 1 then the program will follow this first part of the if else statement
  
printf("\nEnter '1' to continue or '0' to quit:\n"); //instruction to continue or to terminate the program after the user puts in their input for x and gets their final output
scanf("%lg", &D); //this determines whether or not the program will execute the while loop 

while (D==1) {
printf("Enter x:"); //the user inputs whatever number they like for x
scanf("%lg", &X); //the program takes in the input for x
  
if (X<=1.0) {
sin1=(pow(X,2)*sin(X)+(pow(e,-X))); //function call of the first prototype
printf("f(%g) = %g", X, sin1); //printout of the first function
} //if the user inputs a number less than or equal to 1 then the program will follow this second part of the if else statement
else {
cos2=(pow(X,3)*cos(X)-log(X)); //function call of the second prototype
printf("f(%g) = %g", X, cos2); //printout of the second function 
} //if the user inputs a number greater than 1 then the program will follow this second part of the if else statement
  
printf("\nEnter '1' to continue or '0' to quit:\n"); //instruction to continue or to terminate the program after the user puts in their input for x and gets their final output
scanf("%lg", &D); //this determines whether or not the program will execute the while loop continuosly 
} //if the user keeps on inputting 1 then the program will continue to follow the instructions of the while loop until they input the number 0 
return 0;
}
