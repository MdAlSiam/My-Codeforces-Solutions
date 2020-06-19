#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){

    int n;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++)
        cin >> ara[i];

    int oneinpos[32];
    for(int i = 0; i < 32; i++)
        oneinpos[i] = 0;
    for(int i = 0; i < n; i++){
        for(int pos = 0; pos < 32; pos++){
            if(ara[i] & 1) oneinpos[pos]++;
            ara[i] >>= 1;
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        int val = 0;
        for(int pos = 0; pos < 32; pos++){
            if(oneinpos[pos] > 0){
                val += (1 << pos);
                oneinpos[pos]--;
            }
        }
        ans += val*val;
    }

    cout << ans << endl;
}
