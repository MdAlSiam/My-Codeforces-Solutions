#include <bits/stdc++.h>
using namespace std;

#define int long long int

#define maxn 200005

int a[maxn];
vector<int> adj_list[maxn];
int indegree[maxn];
int n, ans, togo;

int32_t main(){
    scanf("%lld", &n);
    for(int i = 1; i <= n; i++)
        scanf("%lld", a+i);

    for(int i = 1; i <= n; i++){
        scanf("%lld", &togo);
        if(togo == -1) continue;
        adj_list[i].push_back(togo);
        indegree[togo]++;
    }

    queue<int> q;
    for(int i = 1; i <= n; i++)
        if(indegree[i] == 0) q.push(i);

    vector<int> positivenodes, negetivenodes;

    ans = 0;

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        ans += a[curr];

        if(a[curr] >= 0) positivenodes.push_back(curr);
        else negetivenodes.push_back(curr);

        for(int son:adj_list[curr]){
            if(a[curr] >= 0) a[son] += a[curr];
            indegree[son]--;
            if(indegree[son] == 0) q.push(son);
        }
    }

    printf("%lld\n", ans);
    for(int i = 0; i < positivenodes.size(); i++)
        printf("%lld ", positivenodes[i]);
    for(int i = negetivenodes.size() - 1; i >= 0; i--)
        printf("%lld ", negetivenodes[i]);
    printf("\n");
}
