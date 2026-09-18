#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{

    int ans = 0;
    for (int val : nums)
    {
        ans ^= val;
    }
    return ans;
}

int main()
{
    vector<int> num;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        num.push_back(x);
    }

    int unique_num = singleNumber(num);

    cout << "Unique Numbe: " << unique_num << endl;

    return 0;
}