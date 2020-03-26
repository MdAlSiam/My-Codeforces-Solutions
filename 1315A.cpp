#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        int ro, col, x, y;
        scanf("%d %d %d %d", &ro, &col, &x, &y);
        int ans = -1;
        ans = max(ans, (ro-x-1)*col);
        ans = max(ans, x*col);
        ans = max(ans, (col-y-1)*ro);
        ans = max(ans, y*ro);
        printf("%d\n", ans);
    }
}
