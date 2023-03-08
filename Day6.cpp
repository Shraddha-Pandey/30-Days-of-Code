#include <map>
#include <iostream>
using namespace std;

int main() {
    int n;
    string str,str2="",str3="";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        for(int j=0;j<str.length();j++){
            (j%2==0)?str2+=str[j]:str3+=str[j];
        }
        cout<<str2<<" "<<str3<<endl;
        str2="";str3="";
    }   
    return 0;
}
