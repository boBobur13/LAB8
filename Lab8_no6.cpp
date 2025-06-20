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
}
template<typename T>
 double average(T a,T b){
    return (a+b)/2.0;
}
int main(){
    compareValues(5,10);
     compareValues(3.5,3.5);
      compareValues(string("apple"),string("banana"));
       cout<<middle(3,1,5)<<endl;
        cout<<middle(9.2,7.8,8.1)<<endl;
         cout<<average(4,6)<<endl;
          cout<<average(2.5,3.5)<<endl;
  return 0;
}
