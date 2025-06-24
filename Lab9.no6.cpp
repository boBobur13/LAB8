#include <iostream>
using namespace std;
void character_types(char arr[],int n){
    int up=0,low=0,d=0,s=0;
    for(int i=0;i<n;i++){
    if(arr[i]>=65&&arr[i]<=90){
   up++;
    }else if(arr[i]>=97&&arr[i]<=122){
   low++;
   }else if(arr[i]>=48&&arr[i]<=57){
    d++;
   }else{
    s++;
        }
    }
    cout<<"Uppercase:"<<up<<" Lowercase:"<<low<<" Digit:"<<d<<" Special:"<<s<<endl;
}
int main(){
    int n;
     cin>>n;
      char arr[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    character_types(arr,n);
  return 0;
}

