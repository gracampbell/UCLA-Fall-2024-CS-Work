
#include <iostream>

using namespace std;

int main() {
    char response = 'y';
    
    while (response == 'y') {
        int num;
        
        cout << "\n" << "Enter a list of ints with a single space between each adjacent pair of ints ... "<< endl;
        
        cin >> num;
        int max = num;
        int min = num;
        
        
        while (cin.peek() != '\n' && cin >> num) {
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
           
        }
        
        
        cout << "The maximum of the ints you entered is " << max << endl;
        cout << "The minimum of the ints you entered is " << min << endl;
        
       
        cout << "\n" << "Continue? (y/n) " << endl;
        cin >> response;
    }
    return 0;
}
