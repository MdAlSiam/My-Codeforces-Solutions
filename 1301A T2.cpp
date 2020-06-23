#include <bits/stdc++.h>
using namespace std;

int test;
string a, b, c;
int len;
bool yes;

int main(){
    cin >> test;
    while(test--){
        cin >> a >> b >> c;
        len = a.length();
        yes = true;
        for(int i = 0; i < len; i++){
            if(a[i] == c[i] or b[i] == c[i]);
            else yes = false;
        }
        if(yes) printf("Yes\n");
        else printf("No\n");
    }
}

