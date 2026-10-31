#include <iostream>
using namespace std;

const int MAX_SIZE = 100001;
int dp[MAX_SIZE];

struct File {
    int size;
    int base_value;
};

int findMaxValue(File files[], int n, int Max_Storage, int K)
{
    for (int w = 0; w <= Max_Storage; w++) {
        dp[w] = -1;
    }
    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        for (int w = Max_Storage; w >= files[i].size; w--) {
            int P = dp[w - files[i].size];

            if (P >= 0) {
                int newValue = P + files[i].base_value - (P % K);

                if (newValue > dp[w]) {
                    dp[w] = newValue;
                }
            }
        }
    }

    int profit = 0;
    for (int w = 0; w <= Max_Storage; w++) {
        if (dp[w] > profit) {
            profit = dp[w];
        }
    }

    return profit;
}

int main()
{
    File files[] = { {4, 10}, {5, 12}, {3, 8}, {6, 15} };
    int n = sizeof(files) / sizeof(files[0]);
    int Max_Storage = 10;

    int studentID = 12305;
    int K = (studentID % 100) % 7 + 2;

    cout << "Total Profit: "
         << findMaxValue(files, n, Max_Storage, K);

    return 0;
}
