#include <iostream>   // std::cout, std::cin
#include <algorithm>  // std::max, std::min
#include <string>     // std::string
using namespace std;


/**
 A procedure which prints its two arguments,
 their sum, their product, their average,
 their maximum and minimum
 (as long as overflow is not encountered).

 @param i1 : the first int
 @param i2 : the second int
*/
void basic_arith(int i1, int i2) {

    cout << "          The specified ints were: " << i1 << " and " << i2 << endl;
    cout << "                     Their sum is: " << i1+i2 << endl;
    cout << "                 Their product is: " << i1*i2 << endl;
    cout << "                 Their average is: " << (static_cast<double>(i1)+ static_cast<double>(i2))/2.0 << endl;
    int max;
    
    if (i1>i2) {
        max = i1;
    }
    else {
        max=i2;
    }
    
       
    cout << "The maximum of the two numbers is: " << max << endl;
    int min;
    
    if (i1>i2) {
        min = i2;
    }
    else {
        min=i1;
    }
    cout << "The minimum of the two numbers is: " << min << endl;
    
}


/**
 A pure function which indicates
 whether a year is a leap year or not.

 @param y : the year
 @return true if y is a leap year
         false if y is not a leap year
*/
bool leap_year(int y) {
    if ((y%400 == 0) || ((y % 4 == 0) && (y % 100 != 0))) {
        return true;
    }
    else {
        return false;
    }
}

/**
 * A function (neither a pure function or a procedure) that
 *  - prints a specified prompt followed by a space,
 *  - extracts non-whitespace characters from the
 *    input buffer and interprets them as a double,
 *  - returns this double.
 * This function makes no attempt to handle bad user input.
 *
 * @param prompt : the prompt to print followed by a space
 * @return the double obtained by
 *         interpreting characters in the input buffer
*/
double get_double(string prompt) {
    cout << prompt << " " ;

    double x;
    cin >> x;
    
    
    return x;
}


int main() {

    basic_arith(100, 101);
    cout << endl;




    int year;
    cout << boolalpha;

    year = 2023;
    cout << "It is " << leap_year(year) << " that " << year << " is a leap year" << endl;

    year = 2024;
    cout << "It is " << leap_year(year) << " that " << year << " is a leap year" << endl;

    year = 2100;
    cout << "It is " << leap_year(year) << " that " << year << " is a leap year" << endl;

    year = 2000;
    cout << "It is " << leap_year(year) << " that " << year << " is a leap year" << endl;

    cout << endl;




    double fave_number = get_double("What is your favorite number?");

  



    cout << fave_number << " is my favorite too!" << endl << endl;


    double unlucky_number = get_double("What number do you view as unlucky?");

    

    cout << unlucky_number << " is unlucky for some!" << endl << endl;



    return 0;
}

