#include <bits/stdc++.h>
using namespace std;

string str;

bool isPalin(int lo, int hi){
    while(lo < hi){
        if(str[lo] != str[hi]) return false;
        lo++;
        hi--;
    }
    return true;
}

void solve(){
    cin >> str;
    int len = str.length();
    int ff, fl = -1, bf, bl = -1;

    ff = 0;
    bf = len-1;

    while(1){
        if(str[ff] != str[bf]) break;
        if(ff+1 < bf-1) ff++, bf--;
        else break;
    }

    //cout << " -ff-bf-> " << ff << " " << bf << endl;

    char ff_char = str[ff];
    char bf_char = str[bf];

    for(int i = ff; i <= bf; i++){
        if(str[i] == ff_char){
            if(isPalin(ff, i)){
                fl = i;
            }
        }
        if(str[i] == bf_char && bl == -1){
            if(isPalin(i, bf)){
                bl = i;
            }
        }
    }

    int flen = fl - ff + 1;
    int blen = bf - bl + 1;

    for(int i = 0; i < ff; i++) cout << str[i];
    if(flen > blen) for(int i = ff; i <= fl; i++) cout << str[i];
    else for(int i = bl; i <= bf; i++) cout << str[i];
    for(int i = bf+1; i < len; i++) cout << str[i];
    cout << endl;

}

int32_t main(){
    int test;
    cin >> test;
    while(test--)
        solve();
}
