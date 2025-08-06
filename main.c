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
//gives useful functions for working with strings
#include <string.h>
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
    char mygraderando = 'A';
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
    printf("I got a %c on the exam\n", mygraderando);
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
    //when printing stuff, we can also mention the width
    //for example, if we want to print an integer with a width of 3
    //do this 
    //this will add two extra empty characters
    int i = 1;
    printf("it is %3d\n", 9);
    //this will add one extra empty character
    printf("it is %3d\n", 99);
    //this will not add any extra characters bc it is already 3 characters 
    printf("it is %3d\n", 999);
    //we can left justify this values by adding a - sign before the numbers 
    printf("it is %-3d\n", 9);
    printf("it is %-3d\n", 99);
    printf("it is %-3d\n", 999);

    //you can also have leading 0s, so instead of empty spaces, we will have 0s 
    printf("it is %03d\n", 9);
    printf("it is %03d\n", 99);
    printf("it is %03d\n", 999);


    //we can also have plus signs and negative signs 
    printf("it is %3d\n", -9);
    printf("it is %+3d\n", +9);

    //we can also add precision, and with precision we can specify the minmum width 
    //so in this example, we are specifying that we want it to have 2 decimals and a minimum width of 6
    float mything = 3.123;
    printf("Example here u go %6.2f\n", mything);
    //will print 123.00 with 3 spaces in front of it 

    //arithmetic operators: = + - * / % ++ --
    int x = 2;
    int y = 3;
    int z = 0;
    //addition
    z = x + y;
    //subtraction
    z = x - y;
    //multiplication
    z = x * y;
    //division
    z = x / y; 
    //now we know that 2/3 is 0.666666
    //but since x and y are integers, they can have decimal places so it will just return 0 
    //now if these were floats
    float x1 = 2;
    int y1 = 3;
    float z1 = x1 / y1; //this will return 0.666666
    //remember by default it will have 6 decimal places
    //keep in mind atleast one of these numbers in the operation has to be a float, otherwise it will just return an integer, which would be 0 
    //modulus 
    //moculus gives u the remainder of a division
    int a = 9;
    int b = 2;
    int c = a % b; 
    //this will return 1, because remember the remainder of this operation will be 1 

    //++ is the increment operator, it will add one to the number 
    a++;
    //a is now 10
    //-- is the decrement operation, it subtracts from the number
    a--;
    //a is now 9 

    //there is also a shortened reassignment operator
    //for example instead of a = a + 5
    //we can do 
    a+=5;
    //so now a is 14 
    //can do the same in subtraction
    a-=5;
    //a is now back to 9 
    
    //we can do the same with multiplication and division
    a*=2;
    //a is now `18
    a/=3;
    //a will be 6

    //accepting user input 
    int myage = 0;
    float mygpa = 0;
    //to clear out a variable and basically reset it, we can use a null terminator 
    char mygrade = '\0';
    //this means that it has a max size of 30 characters 
    char myname[30] = "";
    
    //getting user input
    //first prompt the user
    printf("Please enter your age: ");
    //& is the address of operator 
    //were saying at the adress of our variable myage, store the input that the user gives us 
    scanf("%d", &myage);

    //getting gpa 
    printf("Please put in your gpa: ");
    scanf("%f", &mygpa);

    //getting mygrade
    printf("Please enter your grade");
    //we need to clean the input bufer before we can read a character input
    //this is because when we entered the previous value and hit enter, the enter key which is a new line is still in the input buffer
    //so this newline is saved as the mygrade varriable
    //we can easily clear the input buffer by putting a space after the " and before the %
    scanf(" %c", &mygrade);
    
    
    //getting the name 
    printf("Please enter your name: ");
    //scanf cannot read white spaces
    //will stop reading input when it sees a space
    //use fgets instead to read a string with spaces 
    //first parameter is the variable, second is the size of the string, third is stdin (standard input)
    //we need to also clear the input buffer when using fgets 
    //use the following function
    getchar(); 
    fgets(myname, sizeof(myname), stdin);
    //fgets will alson include the newline from pressing the enter key 
    //we need to remove this also 
    //we need this header file: <string.h>
    //now to make it not include the newline
    //we will make the last character a null terminator pretty much
    name[strlen(myname) -1] ='\0';

    printf("age %d\n", myage);
    printf("gpa %.2f\n", mygpa);
    printf("%c\n", mygrade);
    printf("name %s\n", myname);






    







    
    //make sure that this return 0 is at the end of the main function
    //represents the end of the main function
    return 0;

}

    /*
    int - 4 bytes
    float - 4 bytes
    double - 8 bytes 
    char - 1 byte
    char [] - varies
    bool - 1 byte 
    */
