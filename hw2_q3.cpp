#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    cout << "I am here to help you solve quadratic equations. \n\n";
    cout << "For me to be able to help you, you must format     \n";
    cout << "your equations in a specific way. In particular,   \n";
    cout << "writing -1s, 1s, and 0s is necessary.            \n\n";
    cout << "Here are examples of how to format your equations  \n";
    cout << "so that I understand...                          \n\n";

    cout << "1*x^2+0*x-1=0\n";
    cout << "1*x^2-1*x+0=0\n";
    cout << "1*x^2+1*x-6=0\n";
    cout << "1*x^2+2*x+1=0\n";
    cout << "-0.5*x^2-0.125*x+0.1875=0\n";
    cout << "0.1234*x^2+5.67*x+8.9=0\n\n";

    cout << "Now type your equation.\n\n";

    string s; cin >> s;
    
    s.find ("*x^2");
    string a = s.substr (0,  s.find ("*x^2") );
    
    double aAsADouble = stod (a);
    
    s.rfind ("*x");
    string b = s.substr (s.find ("*x^2")+4, s.rfind ("*x")- s.find ("*x^2")+3 );
    
    double bAsADouble = stod (b);
    
    string c = s.substr (s.rfind ("*x")+2, s.find ('=')-s.rfind ("*x")+2);
    
    double cAsADouble = stod (c);
    
    double xWithMinus= (-bAsADouble - sqrt((bAsADouble*bAsADouble)- (4*aAsADouble*cAsADouble)) )/ (2*aAsADouble);
    
    double xWithPlus= (-bAsADouble + sqrt((bAsADouble*bAsADouble)- (4*aAsADouble*cAsADouble)) )/ (2*aAsADouble);
    
    cout << "(-b - the square root of the discriminant)/ 2a is " << xWithMinus << endl;
    
    cout << "(-b + the square root of the discriminant)/ 2a is " << xWithPlus << endl;
    
    return 0;
}
