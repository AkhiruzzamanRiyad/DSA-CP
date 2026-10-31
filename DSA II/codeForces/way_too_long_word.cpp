#include <iostream>
using namespace std;

void wordAbbervation(string word[], int n)
{
    int i = 0;
    while (i < n)
    {
        int length = word[i].length();
        if (length <= 10)
            cout << word[i] << endl;
        else
        {
            cout << word[i][0] <<length - 2 << word[i][length - 1] << endl;
        }
        i++;
    }

}

int main()
{
    int n;
    cin >> n;
    string word[n];

    for (int i = 0; i < n; i++)
    {
        cin >> word[i];
    }

    wordAbbervation(word, n);
    return 0;
}