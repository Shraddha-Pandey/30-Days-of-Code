#include <iostream>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int input1;
    cin>>input1;
  
    double input2;
    cin>>input2;
  
    string input3;
    getline(cin>>ws, input3);
  
    cout<<i+input1<<endl;
    printf("%.1f\n", d+input2);
    cout<<s<<input3<<endl;
 
    return 0;
}
