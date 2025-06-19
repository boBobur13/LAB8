#include <iostream>
using namespace std;
float f(int n) {
    if (n==1)
        return 1.0; // return 1.0/3
           return 1.0/(n*n)+f(n-1);  // return1.0/(n*(n+2))+f(n-1);
}
int main() {
    int n;
      cin>>n;
        cout<<f(n)<<endl;
  return 0;
}
