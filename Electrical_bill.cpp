#include <iostream>
using namespace std;

float calculatebill(int units_consumed);

int main(){
 float units,Bill_amount;
 cout <<"Enter the amount of units consumed:"<<endl;
 cin>> units;

 Bill_amount = calculatebill(units);

 cout <<"========================================";
 cout <<"\n       Electrical bill summary"<<endl;
 cout <<"========================================";
 cout<<"\n";
 cout <<"Number of units consumed: "<< units << " units"<<endl;
 cout<<"Total electricity bill: ksh "<<Bill_amount<<" shillings"<<endl;
 cout <<"=======================================";

 
}

float calculatebill(int units_consumed){
    float payments = 0;
    if( units_consumed < 100){
        payments = units_consumed*10;
    }
    else if( units_consumed <= 200){
        payments = (100 * 10) + ((units_consumed - 100) * 15);
    }else{
        payments =(100*10) + (100 * 15) + ((units_consumed - 200)*20);
    }
    return payments;
}
