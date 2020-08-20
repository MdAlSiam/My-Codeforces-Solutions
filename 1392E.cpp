#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    int n;
    cin >> n;

    int starter = 1;
    for (int ro = 1; ro <= n; ro++){
        int starter_ = starter;
        for (int col = 1; col <= n; col++){
            if (ro & 1) cout << starter_ << " ";
            else cout << 0 << " ";
            cout.flush();
            starter_ *= 2;
        }
        cout << endl;
        cout.flush();
        starter *= 2;
    }

    int q;
    cin >> q;

    while (q--){
        int sum;
        cin >> sum;

        int x, y, nexbit;
        x = y = nexbit = 1;

        while (true){
            cout << x << " " << y << endl;
            cout.flush();
            if(x == n and y == n) break;

            int nextbit_ = sum & (1LL << nexbit);
            if (x & 1){
                if (nextbit_ != 0) y++;
                else x++;
            }
            else{
                if(nextbit_ != 0) x++;
                else y++;
            }

            nexbit++;
        }
    }
}
