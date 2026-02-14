
#include <iostream>
#include <utility>

using namespace std;


int main() {
    int a ;
    int b ;
    int c ;
    int d ;
    
    cout << "Type four ints with a single space between each adjacent pair of ints ..." << endl;
    
    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    if (b<a) {
        swap (a,b);
    }
    
    if (c<b) {
        swap(b, c);
    }
    
    if (b<a) {
        swap (a,b);
    }
    
    if (d<c) {
        swap(c,d);
    }
    
    if (c<b) {
        swap(b, c);
    }
    
    if (b<a) {
        swap (a,b);
    }
    
    cout << "\n" << "In ascending order , you picked ..." << "\n" << a << " " << b << " " << c << " " << d << endl;
    
    
    return 0;
}
