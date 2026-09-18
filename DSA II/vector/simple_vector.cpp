#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int>vec={1,2,3};
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;

    // for(int i : vec){
    //     cout<< i<< endl;
    // }

    // vector<char> vec ={'a','b','c','d','e'};

    // cout << "size = " << vec.size() << endl;

    // for(char val : vec){
    //  cout<< val<< endl;
    // }

    // vector size function
    vector<int> vec1;
    cout << "size =" << vec1.size() << endl;
    cout << "Capacity = " << vec1.capacity() << endl;
    vec1.push_back(20);
    vec1.push_back(30);
    vec1.push_back(40);
    vec1.push_back(50);
    vec1.push_back(60);
    vec1.push_back(70);
    vec1.push_back(80);
    vec1.push_back(90);
    vec1.push_back(100);

    cout << "size after push back =" << vec1.size() << endl;
    cout << "Capacity = " << vec1.capacity() << endl;
    // for(int i : vec1){
    //     cout << i << endl;
    // }

    // vec1.pop_back();//45 last element

    // cout << "size after pop back  =" << vec1.size() << endl;

    for (int i : vec1)
    {
        cout << i << endl;
    }

    // cout <<"Front value : "  << vec1.front() << endl;
    // cout << "Last value : " <<  vec1.back() << endl;

    // cout << "value at index 1  : "<< vec1.at(1) << endl;

    vec1.insert(vec1.begin(), 10);
    cout << endl
         << endl;

    cout << "size =" << vec1.size() << endl;
    cout << "Capacity = " << vec1.capacity() << endl;

    for (int i : vec1)
    {
        cout << i << endl;
    }

    vec1.resize(20);
    cout << "After resise vector size: " << vec1.size() << endl;

    vec1.clear();
    cout << vec1.size() << endl;

    vec1.reserve(40);
    vec1.resize(40);

    cout << "size =" << vec1.size() << endl;
    cout << "Capacity = " << vec1.capacity() << endl;

    return 0;
}