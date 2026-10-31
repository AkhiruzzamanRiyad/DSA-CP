#include <cmath>
#include <cstdio>
// #include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    int sorted[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sorted[i] = arr[i];
    }

    sort(sorted, sorted + n);

    int madian = sorted[n / 2];

    int madian_ind;
    int mid_ind = n / 2;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == madian)
        {
            madian_ind = i;
        }
    }

    while (madian_pos < n / 2)
    {
        swap(a[madian_ind], a[madian_ind + 1]);
        madian_ind++;
        count++;
    }

    while (madian_ind > n / 2)
    {
        swap(a[madian_ind], a[madian_ind - 1]);
        madian_ind--;
        count++;
    }

    cout << count;

    return 0;
}
