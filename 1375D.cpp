#include <bits/stdc++.h>
using namespace std;

vector<int> v;
vector<int> ans;
int n;

bool isSorted(){
    for(int i = 1; i < n; i++)
        if(v[i-1] <= v[i]);
        else return false;
    return true;
}

int find_mex(){
    bool present[n+1];
    memset(present, false, sizeof(present));
    for(int i = 0; i < n; i++)
        present[v[i]] = true;
    for(int i = 0; i <= n; i++)
        if(!present[i]) return i;
    return -1;
}

void solve(){
    cin >> n;

    v.clear();

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        v.push_back(t);
    }

    ans.clear();

    while(1){
        if(isSorted()) break;
        int mex = find_mex();
        if(mex == -1) break;

        if(mex == n){
            for(int i = 0; i < n; i++){
                if(v[i] != i){
                    v[i] = mex;
                    ans.push_back(i+1);
                    break;
                }
            }
        }
        else{
            v[mex] = mex;
            ans.push_back(mex+1);
        }
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
}

int main(){
    int test;
    cin >> test;
    while(test--)
        solve();
}
