#include <bits/stdc++.h>
using namespace std;

int sclx, scly, n, homex, homey;
int lt, rt, up, dn;
int ansnum;

int main(){
    cin >> n >> sclx >> scly;
    while(n--){
        cin >> homex >> homey;
        if(homey < scly) dn++;
        if(homey > scly) up++;
        if(homex < sclx) lt++;
        if(homex > sclx) rt++;
    }

    ansnum = max(lt, max(rt, max(up, dn)));
    cout << ansnum << endl;

    if(ansnum == lt) cout << sclx-1 << " " << scly << endl;
    else if(ansnum == rt) cout << sclx+1 << " " << scly << endl;
    else if(ansnum == dn) cout << sclx << " " << scly-1 << endl;
    else if(ansnum == up) cout << sclx << " " << scly+1 << endl;
}
