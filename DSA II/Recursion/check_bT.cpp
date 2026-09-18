#include <iostream>
using namespace std;
 void f(int n){
    if(n==0) return;

    cout<<n<<endl;
    f(n-1);
    cout<<n<<endl;
 }
int main() {
    int n=7;

    f(n);
    return 0;
}