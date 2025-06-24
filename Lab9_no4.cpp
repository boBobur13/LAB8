#include <iostream>
using namespace std;
int indexOfLargestElement(double array[], int size){
     int index=0;
      for(int i=1;i<size;i++){
        if(array[i]>=array[index]){
            index=i;
        }
    }
    return index;
}
int main(){
    double array[15];
      for(int i=0;i<15;i++){
        cin>>array[i];
    }
    int index=indexOfLargestElement(array,15);
      cout<<"Index="<<index<<endl;
    return 0;
}
