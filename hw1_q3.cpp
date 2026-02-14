
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
   cout << "Amount due: $";
    
    double amtDue;
    cin >> amtDue;
    
    cout << "Amount received: $";
     
     double amtRec;
     cin >> amtRec;
    
    int totalPenniesDue = round(amtDue * 100);
    int totalPenniesRec = round(amtRec * 100);
    int totalPenniesBack = totalPenniesRec-totalPenniesDue;
    
    int dollarsBack= totalPenniesBack/100;
    
    int leftToGive= totalPenniesBack-dollarsBack*100;
    
    int quartersBack= leftToGive/25;
    
    leftToGive=leftToGive-quartersBack*25;
    
    int dimesBack= leftToGive/10;
    
    leftToGive=leftToGive-dimesBack*10;
    
    int nickelsBack= leftToGive/5;
    
    int penniesBack = leftToGive%5;
    
    cout << "\nChange given:\ndollars -> " << dollarsBack <<  "\nquarters -> " << quartersBack << "\ndimes -> " << dimesBack << "\nnickels -> " << nickelsBack <<"\npennies -> " << penniesBack <<endl;
    
 
    return 0;
}
