
#include <iostream>
#include <string>
using namespace std;


int main() {
   
    string months = "January  February March    April    May      June     July     August   SeptemberOctober  November December ";
    
    cout<< "Please enter an integer between 1 and 12: ";
  
    int num;
    cin >> num;
    
    cout << "The corresponding month is: " << months.substr((num-1)*9,9) << endl;
    
    
    
    
    return 0;
}
