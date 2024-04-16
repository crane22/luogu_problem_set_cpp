#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int budget[12];
    for(int i = 0; i < 12; i++) {
        cin >> budget[i];
    }
    int current = 0, savings = 0;
    for(int i = 0; i < 12; i++) {
        current += 300;
        if(budget[i] > current) {
            cout << '-' << (i + 1) << endl;
            return 0;
        }

        current -= budget[i];

        if(current % 100 > 0) {
            int s = current / 100;
            savings += s;
            current -= s * 100;
        }
    }

    cout << savings * 120 + current << endl;

    return 0;
}