#include <iostream>
#include <cmath>

using namespace std;

int main(){

int dividend;
int divisor;
int quotient = 0;
cout<<" enter the dividend number "<<endl;
cin>>dividend;
cout<<"enter the divisor number"<<endl;
cin>>divisor;

while (dividend>=divisor){
    dividend=dividend-divisor;
     quotient ++;

}
cout<<"the quotient is :"<<" "<<quotient<<endl;
cout<<"the remainder is :"<<" "<<dividend<<endl;


}
