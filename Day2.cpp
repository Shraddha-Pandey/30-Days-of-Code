#include <iostream>
using namespace std;

void solve(float meal_cost, int tip_percent, int tax_percent){
  
    float tip=(tip_percent*meal_cost)/100;
    float tax=(tax_percent*meal_cost)/100;
    float total=round(meal_cost+tip+tax);
  
    cout<<total;
}

int main(){
  
    float meal_cost; 
    int tip_percent, tax_percent;
    cin>>meal_cost;
    cin>>tip_percent;
    cin>>tax_percent;
    solve(meal_cost, tip_percent, tax_percent);
  
    return 0;
}
