#include <iostream>

int helloWorld(){
    /*
        Prints Hello World!
    */
    std::cout << "Hello World!" << std::endl; // print
    return 0;
}

int product(){
     /*
        Takes the two inputs from the user and prints 
        the product.
     */

    int b = 0, a =0; // init two int vars
    std::cout << "Enter a:"; // print 
    std::cin >> a; // Takes user input and assigns it to a
    std::cout << "Enter b:"; //print
    std::cin >> b; // Takes user input and assigns it to b
    std::cout << "The product of " << a << " and " <<  // prints statement and product of a and b
    b << " is " << a*b << std::endl; 
    
    return 0;
}

int sum()
{
    /*
        Takes two numbers from the user and prints the 
        summation
    */
    
    std::cout << "Enter two numbers:" << std::endl; // prints request
    
    int v1 = 0, v2 = 0; // init int vars v1 and v2
    
    // Much cleaner to have as one statement broken up per exercise request.
    std::cin >> v1 >> v2; // takes two input from user and stores  first in v1 and second in v2
    std::cout << "The sum of " << std::endl; // print
    std::cout << v1 << std::endl; // print 
    std::cout << "and "  << std::endl; //print
    std::cout << v2 << std::endl; //print
    std::cout << "is " << std::endl; //print
    std::cout << v1 + v2 << std::endl; //print
    
    return 0;
}

int sumFifttyToHundred(){
    /*
        Adds all the values between 50 and 100 
    */
    
    int start = 50, stop = 100, sum = 0; //init three init vars

    while (start <= stop){
        int var = start;// init int var 
        sum += var; // add the current sum with var and save to sum
        start++; // increment start
    }

    std::cout << sum << std::endl; // print sum
    return 0;

}


int tenToZero(){
    /*
        Prints values 10 to 0
    */
    int var = 10;// intit int Var with value 10
    
    // while (var != -1){
    //     std::cout << var-- << std::endl; // prints var and decrements its value
    // }
    
    return 0;
}

int xToY(){
    /*
        Prints the values that fall into the range
        of the two numbers given by the user.
    */
    int x = 0, y = 0; // init two int vars x and y
    
    std::cout << "Enter two numbers: " << std::endl; //print request to user
    std::cin >> x >> y; //Users input is stored in x and y

    while (x <= y){
        std::cout << x++ << std::endl;// prints x and increments its value
    }

    return 0;

}


int fiftyToHundredFor(){
    /*
        Sums the numbers 50 to 100 
    */
   int sum = 0; // init int var

    for(int var = 50; var <= 100; var++)// run till var greater than 100
        sum += var; // sum = sum + var
    
    std::cout << sum << std::endl;// print sum

    return 0;
}

int sumOfCin(){
    int sum = 0, val = 0, go = 1;
    
    while(go){
        std::cout << "Enter a value:" << std::endl;
        std::cin >> val;
        
        sum += val;
        
        std::cout << "Continue (1)  or Stop (0) ? " << std::endl;
        std::cin >> go;
    }

    std::cout << sum << std::endl; 

    return 0;

}

int main(){
    /*
        Main function that runs the functions 
        created for each c++ primer excercise.
    */
    
    //exercise 1.3
    //helloWorld();

    //excercise 1.4
    //product();
    
    //excercise 1.5
    //sum(); 

    //excercise 1.6
    /*
    std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;

    This statement is not legal the ";" marks the end of a statement.
    To make it a legal statment remove the all ";" except the last one.
    */

   //excercise 1.9
   //sumFifttyToHundred();

    //exercise1.10
    //tenToZero();

    //excercise 1.11
    //xToY();

    //excercise 1.13
    //fiftyToHundredFor();

    //excercise 1.16
    sumOfCin();
    
    return 0;
}