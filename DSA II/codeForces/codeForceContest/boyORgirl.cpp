#include <iostream>
using namespace std;

int main()
{
    string s;

    cin >> s;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != '0')
        {
            count++;

            for (int j = i + 1; j < s.length(); j++)
            {

                if (s[i] == s[j])
                {
                    s[j] = '0';
                }
            }
        }
    }
    

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}