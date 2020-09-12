//header for the included library iostream
#include <iostream>


/*  endl: is an object of iostream that adds a newline character
    and flushes the buffer.
    
    Flushing the buffer ensures that all the output the program
    has generated so far is actually written to the output stream, 
    rather than sitting in memory waiting to be written.

    The prefix std:: indicates that the names cout and endl 
    are defined inside the namespace named std.

    The scope operator :: is used ti define the namespace of a 
    method.
*/

int main()
{
    /* This is and expression
        << output operator
        left hand operand is the ostream object cout 
        right hand operand is the value to print.

        This expression can be read as 
        (std::cout << "Enter two numbers:") << std::endl;
    */
    std::cout << "Enter two numbers:" << std::endl;
    
    //define two int vars
    int v1 = 0, v2 = 0;
    
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}