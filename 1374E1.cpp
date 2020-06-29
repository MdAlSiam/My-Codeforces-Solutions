#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    int n, k;
    cin >> n >> k;
    vector<int> dujonar, tomar, amar, optimal;

    for(int i = 0; i < n; i++){
        int val, choice1, choice2;
        cin >> val >> choice1 >> choice2;
        if(choice1 and choice2) dujonar.push_back(val);
        else if(choice1) amar.push_back(val);
        else if(choice2) tomar.push_back(val);
    }

    sort(amar.begin(), amar.end());
    sort(tomar.begin(), tomar.end());

    for(int i = 0; i < min((int)amar.size(), (int)tomar.size()); i++){
        dujonar.push_back(amar[i] + tomar[i]);
    }

    sort(dujonar.begin(), dujonar.end());

    if(dujonar.size() < k){
        cout << "-1" << endl;
        return 0;
    }

    int ans = 0;
    for(int i = 0; i < k; i++)
        ans += dujonar[i];
    cout << ans << endl;

}
