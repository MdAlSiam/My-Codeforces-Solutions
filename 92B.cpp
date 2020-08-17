#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int ans = 0;

    for(int pp = str.length()-1; pp > 0;){
        if(str[pp] == '0'){
            ans++;
            pp--;
            continue;
        }

        ans++;
        while(str[pp] == '1'){
            ans++;
            pp--;
        }
        if(pp >= 0) str[pp] = '1';
    }

    cout << ans << endl;
}
