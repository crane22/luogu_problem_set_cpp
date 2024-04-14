#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int k = 0;
    cin >> k;

    int n = 0;
    for(double sum = 0.0; sum < k; ++n) {
        sum += 1.0 / k;
    }

    cout << n << endl;

    return 0;
}