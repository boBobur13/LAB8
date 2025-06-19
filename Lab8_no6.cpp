#include<iostream>
#include<string>
using namespace std;
 template<typename T>
 void compareValues(T a,T b){
    if(a>b){
     cout<<"largest is <<a<<endl;
       }else if(a<b){
         cout<<"largest is "<<b<<endl;
          }else{
          cout<<"values are equal"<<endl;
  }
}
template<typename T>
  T middle(T a,T b,T c){
    if((a>b&&a<c)||(a>c&&a<b)) return a;
      else if((b>a&&b<c)||(b>c&&b<a)) return b;
          else return c;
