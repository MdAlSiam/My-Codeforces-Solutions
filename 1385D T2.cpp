#include <bits/stdc++.h>
using namespace std;

int n;
char str[200005];
int test;

int solve(int lo, int hi, char ch){

    if(lo == hi){
        if(str[lo] != ch) return 1;
        else return 0;
    }

    int mid = (lo + hi) / 2;

    int k1 = 0, k2 = 0;

    for(int i = lo; i <= mid; i++)
        if(str[i] != ch) k1++;

    for(int i = mid+1; i <= hi; i++)
        if(str[i] != ch) k2++;

    char nextchar = ch + 1;

    return min(k1+solve(mid+1, hi, nextchar), k2+solve(lo, mid, nextchar));
}

int main(){
    scanf("%d", &test);
    while(test--){
        scanf("%d", &n);
        scanf(" %s", str+1);
        int ans = solve(1, n, 'a');
        printf("%d\n", ans);
    }
}
