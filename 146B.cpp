#include <bits/stdc++.h>
using namespace std;

int getLuckyMask(int num) {
    int ret = 0;
    int multiplier = 1;

    while (num) {
        int digit = num%10;
        num /= 10;

        if (digit == 4 or digit == 7) {
            ret += digit*multiplier;
            multiplier *= 10;
        }
    }

    return ret;
}

int main(int argc, const char** argv) {
    int lowerLimit, luckyNumber;
    cin >> lowerLimit >> luckyNumber;

    int candidate = lowerLimit + 1;
    
    while (true) {
        int mask = getLuckyMask(candidate);
        if (mask == luckyNumber) {
            cout << candidate << endl;
            break;
        }
        candidate++;
    }

    return 0;
}