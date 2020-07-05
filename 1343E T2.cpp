#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define maxn 200005

int n, m, a, b, c;
int val[maxn];

vector<int> adj_list[maxn];
int level[4][maxn];

void BFS(int src, int index){
    queue<int> q;
    level[index][src] = 0;
    q.push(src);

    while(!q.empty()){
        int now = q.front();
        q.pop();
        //cout << "->From " << src << " to " << now << " level " << level[index][now] << endl;
        for(int i = 0; i < adj_list[now].size(); i++){
            int next = adj_list[now][i];
            if(level[index][next] != -1) continue;
            level[index][next] = level[index][now] + 1;
            q.push(next);
        }
    }
}

int solve(){

    BFS(a, 1);
    BFS(b, 2);
    BFS(c, 3);

    int ans = LONG_LONG_MAX;

    for(int i = 1; i <= n; i++){
        int ansnow = 0;
        int highway = level[1][i] + level[3][i];
        int goli = level[2][i];
        if(highway+goli > m) continue;
        ansnow += val[highway+goli];
        ansnow += val[goli];
        ans = min(ansnow, ans);
    }

    return ans;
}

void input(){
    cin >> n >> m >> a >> b >> c;
    for(int i = 1; i <= n; i++) adj_list[i].clear();
    //memset(level, -1, sizeof(level));
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= n; j++){
            level[i][j] = -1;
        }
    }
    for(int i = 1; i <= m; i++) cin >> val[i];
    sort(val+1, val+m+1);
    for(int i = 2; i <= m; i++) val[i] += val[i-1];
    for(int i = 1; i <= m; i++){
        int t1, t2;
        cin >> t1 >> t2;
        adj_list[t1].push_back(t2);
        adj_list[t2].push_back(t1);
    }
    //cout << "Inpputted" << endl;
}

int32_t main(){
    int test;
    cin >> test;
    while(test--){
        input();
        int ans = solve();
        cout << ans << endl;
    }
}
