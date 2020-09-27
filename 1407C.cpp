#include <iostream>
#include <map>
using namespace std;

#define int long long int

int32_t main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "! 1" << endl;
        cout.flush();
        return 0;
    }

    int ans[n+2];
    for (int i = 1; i <= n; i++) {
        ans[i] = -1;
    }

    int i = 1, j = 2, num1, num2, num;

    while (j <= n) {
        cout << "? " << i << " " << j << endl;
        cout.flush();
        cin >> num1;
        cout << "? " << j << " " << i << endl;
        cout.flush();
        cin >> num2;

        if (num1 > num2) {
            // we found i-th num
            ans[i] = num1;
            i = j;
            j = j+1;
        }
        else {
            // we found j-th num
            ans[j] = num2;
            i = i;
            j = j+1;
        }
    }

    // find the missing number
    map <int, int> here;
    int theMissingPosition;
    for (int i = 1; i <= n; i++) {
        if (ans[i] == -1) {
            theMissingPosition = i;
        }
        else {
            here[ans[i]] = 1;
        }
    }
    int theMissingNumber;
    for (int i = 1; i <= n; i++) {
        if (not here.count(i)) {
            theMissingNumber = i;
            break;
        }
    }
    ans[theMissingPosition] = theMissingNumber;

    cout << "!";
    for (int i = 1; i <= n; i++) {
        cout << " " << ans[i] ;
    }
    cout << endl;
}
