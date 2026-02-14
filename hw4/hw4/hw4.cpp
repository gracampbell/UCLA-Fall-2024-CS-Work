//
//  hw4.cpp
//  Created by Michael Andrews for 10A students on 7/25/24.
//

#include "hw4.hpp"
using namespace std;


// Completed for you...
void print(const vector<int>& v) {
    for (size_t i = 0, N = v.size(); i < N; ++i) {
        cout << v[i] << ", ";
    }
    cout << endl;
}


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

    


bool leap_year(int year) {
    
    if ((year%400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        return true;
    }
    else {
        return false;
    }
    
    
}


void capitalize(string& s) {
       

    
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] <= 'z' && s[i] >= 'a') {  // Check if the character is lowercase
            s[i] = s[i] + ('A' - 'a') ;  // Convert it to uppercase
            }
        }
    
    
    

    
    
    
}


vector<int> concatenate(const vector<int>& v1, const vector<int>& v2) {
    
    vector<int> vtogether;
    
    for (int i = 0; i < v1.size(); ++i) {
        vtogether.push_back(v1[i]);
    }
    
    for (int i = 0; i < v2.size(); ++i) {
        vtogether.push_back(v2[i]);
    }
    
    
    return {vtogether};
    
}


void reverse(vector<int>& v) {
    
    vector<int> vbackwards;
    
    
    for (int i = v.size() - 1; i >= 0; --i) {
        vbackwards.push_back(v[i]);
    
    }
    v = vbackwards;
    
}

double get_double(const string& prompt) {
    
    cout << prompt << " " ;

    double x;
    cin >> x;
    
    
    return x;
    
   
}


string new_capitalized_version(string s) {
    
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] <= 'z' && s[i] >= 'a') {  // Check if the character is lowercase
            s[i] = s[i] + ('A' - 'a') ;  // Convert it to uppercase
            }
        }
    
    
    return s;     // Only written so that what I have given you builds correctly.
}


bool is_magic_square(const vector<vector<int>>& square) {
    
    int g = square.size();
    
    if (g == 0) {
        return true;
        
    }
    
    for (int i = 0; i<g; i++) {
        
        if (square.at(i).size() != g) return false;
          
    }
    
    int maxNumber = g * g;
    
    vector<bool> appeared(maxNumber + 1, false);
    
    for (int i = 0; i < g; i++) {
        for (int j=0; j< g ; j++) {
            int currentCheck = square.at(i).at(j);
            if (currentCheck<1 || currentCheck> maxNumber){
                return false;
            }
            appeared.at(currentCheck) = true;
        }
    }
    appeared.at(0)= true;
    for (int i = 0; i<appeared.size(); i++) {
        
        if (appeared.at(i)== false)
            return false;
    }
    
    int magicTotal = (g*(g*g +1))/2;
    
    for (int i = 0; i<g; i++) {
        int total = 0;
        for (int j=0; j<g; j++) {
            total = total +  square.at(i).at(j);
        }
        if (magicTotal != total) {
            return false;
        }
    }
    
    for (int i = 0; i<g; i++) {
        int total = 0;
        for (int j=0; j<g; j++) {
            total = total +  square.at(j).at(i);
        }
        if (magicTotal != total) {
            return false;
        }
    }
    
    int total = 0;
    
    for (int i = 0; i<g; i++) {
        total = total +  square.at(i).at(i);
        
        }
    if (magicTotal != total) {
        return false;
    }
    
    int otherDTotal =0 ;
    
    for (int i = 0; i<g; i++) {
        otherDTotal = otherDTotal +  square.at(i).at(g - i - 1);
        
        }
    if (magicTotal != otherDTotal) {
        return false;
    }
    
    
    return true;  // Only written so that what I have given you builds correctly.
}
