#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans[n+1];
    for(int i = 1; i <= n; i++)
        for(int j = i+i; j <= n; j += i)
            ans[j] = i;

    sort(ans+1, ans+n+1);

    for(int i = 2; i <= n; i++)
        cout << ans[i] << " ";
}
