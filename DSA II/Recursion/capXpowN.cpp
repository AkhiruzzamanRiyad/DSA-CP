#include <iostream>
using namespace std;

int calPower(int x, int n)
{
    if(x == 0) return 0;
    if (n == 0) return 1;

    return x * calPower(x,n-1);
}

int main() {
    int x;
    int n;

    cout << "Input X and n : ";
    cin >> x >> n;

    cout << "Result : " << calPower(x,n) << endl;
    return 0;
}