
#include <iostream>
#include <string>

using namespace std;

int main() {
  
    string num;
    
    cout<< "Enter an integer between 1,000 and 999,999 including the comma: ";
    
    cin >> num ;
    
    size_t numLength = num.length();
        
    
    cout<< "Actually, I don't like the comma. This is better: "<< num.substr(0,numLength-4)<< num.substr(numLength-3)<< endl;
    
  
    
    return 0;
}
