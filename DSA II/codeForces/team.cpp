#include <iostream>
#include <vector>
using namespace std;

void team(const vector<vector<int>> &problem, int n)
{
    int willSolve = 0;
    
    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < 3; j++)
        {
            if (problem[i][j] == 1)
                count++;
        }

        if (count >= 2)
        {
            willSolve += 1;
        }
    }

    cout << willSolve << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> problem(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> problem[i][j];

            if (problem[i][j] != 0 && problem[i][j] != 1)
            {
                cout << "Please input 0 or 1" << endl;

                return 0;
            }
        }
    }

    team(problem, n);

    return 0;
}