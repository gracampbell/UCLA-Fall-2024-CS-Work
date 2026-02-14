
#include <iostream>
#include <string>

using namespace std;



int main() {

    cout << "Enter an integer between 1 and 2147483647 ( inclusive ): " ;
    
    int min = 1;
    size_t max = 2147483647;
    
    size_t input;
    cin >> input;
    
    
    
    
    if (min>input || max<input) {
        
        cout << "The integer you typed is not in the specified range" << endl;
        
    }
    
    else {
        cout << "The binary representation of " << input << " is given by ";
        
        size_t g = input;
        
        string outputInBinary = "";
        
        
        while (g > 0) {
            
            char remainder = (g % 2) + '0';
            
            outputInBinary = remainder + outputInBinary;
                            g /= 2;
        }
        
        
        cout << outputInBinary << endl;
        
    }
    
    
    return 0;
}
