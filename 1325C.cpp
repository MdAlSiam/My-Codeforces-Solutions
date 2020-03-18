#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int edgenode1[n+2], edgenode2[n+2], degree[n+2], ans[n+2];
    memset(degree, 0, sizeof(degree));
    memset(ans, -1, sizeof(ans));
    for(int i = 0; i < n-1; i++){
        scanf("%d %d", &edgenode1[i], &edgenode2[i]);
        degree[edgenode1[i]]++;
        degree[edgenode2[i]]++;
    }

    int valuetoset = 0;
    for(int i = 0; i < n-1; i++){
        if((ans[i] == -1) && ((degree[edgenode1[i]] == 1) || (degree[edgenode2[i]] == 1))){
           ans[i] = valuetoset++;
        }
    }
    for(int i = 0; i < n-1; i++){
        if(ans[i] == -1) ans[i] = valuetoset++;
    }

    for(int i = 0; i < n-1; i++){
        printf("%d\n", ans[i]);
    }
}
