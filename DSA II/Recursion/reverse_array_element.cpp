#include <iostream>
using namespace std;
void reverse (int arr[], int i,int n){
    if(i >= n) return;
    swap(arr[i], arr[n]);

    reverse(arr, i+1 , n-1);

}
int main() {
    int n;
    cout << "Enter the number of element: ";
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    
    cout << "Before reverse: "<< endl;
    for(int i = 0; i<n; i++){
        cout<<  arr[i] << " ";
    }
    cout<< endl << endl;

    reverse(arr ,0, n-1);
    
    cout << "after reverse: "<< endl;
    for(int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }

    
    
    return 0;
}