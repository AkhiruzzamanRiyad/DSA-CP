#include <iostream>
using namespace std;

int fact(int n)
{
    if(n == 1)return 1;

    return n * fact(n-1);
}
int main() {
    int n;
    cout << "Number: " ;
    cin>>n;

    int factResult = fact(n);

    cout << "Factorial of "<<n<<" : " << factResult << endl;
    
    return 0;
}