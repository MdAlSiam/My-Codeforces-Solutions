#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int x;
        cin >> x;

        int now = 0;
        int toAdd = 1;
        int stepKount = 0;

        while (true) {
            now += toAdd;
            toAdd++;
            stepKount++;

            if (now >= x) {
                break;
            }
        }

        if (x == now-1) {
            stepKount++;
        }

        cout << stepKount << endl;
    }
}