#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    int k;
    cin >> k;

    string str = "codeforces";
    int torepeat[10];
    for(int i = 0; i < 10; i++) torepeat[i] = 1;

    int kount = 1;
    if(kount >= k){
        cout << str << endl;
        return 0;
    }

    while(1){
        for(int i = 0; i < 10; i++){
            kount = kount / torepeat[i];
            torepeat[i]++;
            kount = kount * torepeat[i];
            if(kount >= k) break;
        }
        if(kount >= k) break;
    }

    for(int i = 0; i < 10; i++)
        while(torepeat[i]--) cout << str[i];
    cout << endl;
}
