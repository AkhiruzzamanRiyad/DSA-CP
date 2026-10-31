#include <iostream>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;

    int cont[n];

    for (int i = 0; i < n; i++)
    {
        cin >> cont[i];
    }

    int minSocre = cont[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (cont[i] >= minSocre && cont[i] > 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}