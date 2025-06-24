#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
     srand(time(0));
     int arr[6]={};
     for(int i=0;i<10000;i++){
     arr [1+rand()%6-1] ++;
     
}
   
      for(int i=0;i<6;i++){
        cout<<i+1<<":"<<arr[i]<<endl;
    }
      return 0;
}
