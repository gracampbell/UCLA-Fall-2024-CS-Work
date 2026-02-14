#include <iostream>
#include <algorithm>
using namespace std;

int main() {

cout << "Enter an integer between -10000 and 10000: ";

    double i ;
    cin >> i ;

    cout << "Enter another integer between -10000 and 10000: " ;
    
    double j ;
    cin >> j ;
    
    cout << "Their sum is: " << j+i << endl;
    cout << "Their product is: " << j*i << endl;
    cout << "Their average is: " << (j+i)/2 << endl;
    cout << "The maximum of the two numbers is: " << max(i,j) << endl;
    cout << "The minimum of the two numbers is: " << min(i,j) << endl;
    
    
    return 0;
}
