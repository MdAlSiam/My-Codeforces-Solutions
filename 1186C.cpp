#include <bits/stdc++.h>
using namespace std;

int main(){
    string big, refer;
    cin >> big;
    cin >> refer;
    big = "#" + big;

    int cumone[big.length()];
    cumone[0] = 0;
    for (int i = 1; i < big.length(); i++) cumone[i] = cumone[i-1] + (big[i] == '1');
    int refone = 0;
    for (int i = 0; i < refer.length(); i++) refone += (refer[i] == '1');

    int ans = 0;

    for (int start = 1; start+refer.length()-1 < big.length(); start++) {
        int kount = cumone[start+refer.length()-1] - cumone[start-1];
        if (kount%2 == refone%2) ans++;

        if(false and kount%2 == refone%2){
            for (int i = start; i <= start+refer.length()-1; i++) {
                cout << big[i];
            }
            cout << " " << kount << " " << refone << endl;
        }
    }

    cout << ans << endl;
}
