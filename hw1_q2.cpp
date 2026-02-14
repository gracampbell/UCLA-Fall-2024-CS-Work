
#include <iostream>
using namespace std;

int main() {
    
   cout << "Enter the first military formatted time: ";
    int time1 ;
    cin >> time1 ;
    
    cout << "Enter the second military formatted time: ";
    int time2 ;
    cin >> time2 ;
    
    int MinutesTime1 = ((time1/100)*60)+ (time1%100);
    int MinutesTime2 = ((time2/100)*60)+ (time2%100);
    int DifferenceTotalMinutes =  (MinutesTime2-MinutesTime1 + 24 * 60) % (24 * 60);
    int DifferenceHours= DifferenceTotalMinutes/60;
    int DifferenceMinutes= DifferenceTotalMinutes%60;
    

    
    cout << "Difference between the times: " << DifferenceHours << " hours " << DifferenceMinutes << " minutes" << endl;
    
    return 0;
}
