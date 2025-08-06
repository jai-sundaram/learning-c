//btw in C comments can eb anywhere in your code 

/*
    Writing 
    A
    Multi
    Line
    Comment
*/
//stdio.h allows u to use input/ouput functions like printf and scanf
#include <stdio.h>
//needed for working with booleans 
#include <stdbool.h> 
//main function is the entry point of the program 
int main(){
    //also in c, the main function needs to return an integer
    //returns it to the operating system
    //serves as an exit code    
    //0 means that the program ran successfully
    //non zero value means that there is an error 
    //good practice to return a 0 for backwards compatibility

    //to print the code, we can use the printf function, make sure to end with semicolon like in java 
    //to make the line after this current line to be on the next line, we can add the \n at the end 
    printf("I like Pizza!\n");
    printf("It's really goodd\n");

    //variables
    //creating an integer variable 
    int age = 25; 
    int year  = 2025;
    int quantity = 10;
    //creating a float variable
    float gpa = 4.0;
    float price = 25.99;

    //if you want a float that has more than 6 decimal places, use double type 
    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;

    //we can also print characters
    //we need to use single quotes
    char mygrade = 'A';
    char mycurrency = '$';


    //there are no strings in c 
    //we instead use a character array
    //note that this uses double quotes 
    char name[]= "John Doe";
    //we could also just have one word in this 
    char food[] = "pizza";
    //in strings u can include numbers but they are treated as characters rather than numeric values 
    //so we cant use it with any math in the future 
    char myemail[] = "random123@gmail.com";
 
    //we can also work with bools, or booleans
    //but to work with them we do need another header file (check the top of the file rq)
    bool mybool = true;
    //true corresponds to 1 
    bool myotherbool = false;
    //false corresponds to 0
    

    //printing the variable
    //the % is pretty much a format specifier 
    //we use d to specify an integer (d means decimal) 
    //the second field is the variable that we are inserting into the statement 
    printf("You are %d years old.\n", age);

    printf("The year is %d\n", year);
    printf("I am buying %d priuses\n", quantity);
    ///%f is the format for float varriables 
    printf("My GPA is %f\n", gpa);
    //whe working with float variables, it has a default behavior of printing 6 decimal places
    //however we can specify this, the number after the . is the number of decimal places we want to print
    printf("My GPA is %.2f\n", gpa);
    printf("The price is $%.2f\n", price);

    //to print a double variable, we use the %lf format specifier 
    //you have to again specify the number of decimal places to display 
    printf("I think that the value of pi is %.9lf\n", pi);
    printf("I believe the value of e is %.8lf\n", e);

    //printing a character
    //the format specifier is %c
    printf("I got a %c on the exam\n", mygrade);
    printf("I have %c10 in my bank account", mycurrency);

    //printing a string
    //the format specifier is %s
    printf("Hello my name is %s\n", name);
    printf("u also like %s\n", food);
    printf("My email is %s\n", myemail);

    //printing a boolean
    //the format specifier is %d
    printf("My bool is %d\n", mybool);
    //now printing this will actually print 1 
    printf("my other bool is %d\n", myotherbool);
    //now printing this will actually print 0 
    //we dont usually direct display them using like print statements

    //quick intro to if statements
    //pretty easy same as java
    if(mybool){
        printf("it is true\n");
    }
    else{
        printf("it is false");
    }











    //make sure that this return 0 is at the end of the main function
    //represents the end of the main function
    return 0;
}