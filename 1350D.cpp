#include <bits/stdc++.h>
using namespace std;

int test;
int n, k;
int ara[100005];

bool solve(){
    cin >> n >> k;
    bool present = false;
    for(int i = 0; i < n; i++){
        cin >> ara[i];
        if(ara[i] == k) present = true;
    }

    if(not present) return false;

    if(n == 1){
        if(ara[0] == k) return true;
        else return false;
    }

    if(n == 2){
        sort(ara, ara+2);
        if(ara[1] > k) return true;
        else if(ara[1] == k and ara[0] == k) return true;
        else return false;
    }

    for(int i = 0; i < n; i++){
        if(ara[i] >= k){
            if(i > 0 and ara[i-1] >= k) return true;
            if(i > 1 and ara[i-2] >= k) return true;
            if(i < n-1 and ara[i+1] >= k) return true;
            if(i < n-2 and ara[i+2] >= k) return true;
        }
    }

    return false;
}

int main(){
    cin >> test;
    while(test--)
        if(solve()) printf("YES\n");
        else printf("NO\n");
}
