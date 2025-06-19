#include<iostream>
using namespace std;
int octaltoDec(const int& octalNumber){
 int decimal=0, base=1, temp=octalNumber;
   while(temp!=0){
     int lastdigit=temp%10;
       decimal+=lastdigit*base;
        base*=8;
         temp/=10;
    }
    return decimal;
}
int main(){
    int octal;
     cin>>octal;
      cout<<octaltoDec(octal)<<endl;
   return 0;
}
