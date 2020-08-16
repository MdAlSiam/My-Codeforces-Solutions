#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<int> v;
        v.clear();
        int ans = -1;
        int kount = 1;
        for(int i = 1; i <= n; i++){
            if(i == n){
                if(str[n-1] == str[0] and v.size() != 0){
                    v[0] += kount;
                }
                else if(str[n-1] == str[0] and v.size() == 0){
                    ans = (kount+2)/3;
                }
                else{
                    v.push_back(kount);
                }
                break;
            }
            if(str[i] != str[i-1]){
                v.push_back(kount);
                kount = 1;
            }
            else{
                kount++;
            }
        }

        if(ans != -1){
            cout << ans << endl;
            continue;
        }

        ans = 0;
        for(int i = 0; i < v.size(); i++){
            ans += v[i]/3;
        }

        cout << ans << endl;
    }
}
