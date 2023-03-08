#include <map>
#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int num;
    string name;
    
    map<string, int>phone_book;
    
    for(int i=1; i<=n; i++){
        cin>>name;
        cin>>phone_book[name];
    }
    
    while(cin>>name){
        if(phone_book[name]){
            cout<<name<<"="<<phone_book[name]<<endl;
        }else{
            cout<<"Not found"<<endl;
        }
    }
    
    return 0;
}
