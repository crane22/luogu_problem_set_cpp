#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int k = 0, n = 0;
    double Sn = 0.0;
    cin >> k;

    while(Sn <= k) {
        n++;
        Sn += ((double)1) / n;
    }

    cout << n << endl;

    return 0;
}