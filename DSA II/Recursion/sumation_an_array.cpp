#include <iostream>
using namespace std;
int sum(int arr[], int size){
    if(size == 0) return 0;

    return arr[size - 1] + sum(arr, size - 1);
}


int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,20};
    int size = sizeof(arr)/ sizeof(arr[0]);

    cout<<"Sumation of thr arry: " << sum(arr,size)<< endl;
    return 0;
}