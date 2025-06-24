#include <iostream>
using namespace std;
int indexOfLargestElement(double array[],int size){
     int max_index=0;
      for(int i=1;i<size;i++){
        if(array[i]>=array[max_index]){
            max_index=i;
        }
    }
    return max_index;
}
int main(){
    double array[15];
      for(int i=0;i<15;i++){
        cin>>array[i];
    }
    int index=max_indexOfLargestElement(array,15);
      cout<<"index="<<index<<endl;
    return 0;
}
