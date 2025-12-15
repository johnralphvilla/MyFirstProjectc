#include <iostream>
using namespace std;   
 int main() {
    double mark, pecentage;
    cout << "Enter your Mark:";
    cin >> mark;
    pecentage = (mark / 100.0) * 100;
    
    cout << "Your Pecentage is:" << pecentage << "%" << "\n";
    
    double Gpa=(pecentage/100.0)*4.0;
    cout << "Your GPA is:" << Gpa << "\n";
  
    
    
return 0;
 }