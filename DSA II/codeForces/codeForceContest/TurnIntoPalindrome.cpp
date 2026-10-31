#include <iostream>
#include <string>

using namespace std;

void test() {
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    for (int i = 0; i < n / 2; ++i) {
        char left = s[i];
        char right = s[n - 1 - i];

        if (left != right) {
            if (left == c || right == c) {
                continue;
            }

            if(left)
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test();
    }
    return 0;
}