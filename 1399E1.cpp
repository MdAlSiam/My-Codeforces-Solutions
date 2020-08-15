#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define maxn 100005

vector<pair<int, int> > adj_list[maxn];
int leaves[maxn];
bool visited[maxn];
priority_queue<pair<int, pair<int, int> > > pq;
int test, sum, S, ans, subtractable, curr_wt, num_of_leaves, curr_leafs;
int uu, vv, ww, n;

void dfs(int u){
    visited[u] = true;

    //cout << "Node " << u << endl;

    if(adj_list[u].size() == 1 and u != 1){
        leaves[u] = 1;
//        cout << u  << " as leaf " << leaves[u] << " " << endl;
//        for(int i = 1; i <= 5; i++)
//        printf("%lld | ", leaves[i]);
//        cout << endl;
        return;
    }

    else for(int i = 0; i < adj_list[u].size(); i++){
        int v = adj_list[u][i].first;
        int w = adj_list[u][i].second;
        if(visited[v]) continue;
        if(v == u) continue;
        dfs(v);
        //cout << "Node " << u << " back from " << v << endl;
        leaves[u] += leaves[v];
        //cout << leaves[v] << " added to " << u << " and gets " << leaves[u] << endl;
        sum += leaves[v]*w;
        pq.push({(w*leaves[v] - (w/2)*leaves[v]), {w, leaves[v]}});
//        for(int i = 1; i <= 5; i++)
//        printf("%lld | ", leaves[i]);
        //cout << endl;
        //cout << v << " " << w << " " << leaves[v] << " ";
        //cout << w*leaves[v] - (w/2)*leaves[v] << " pushed" << endl;
    }
}

int32_t main(){
    scanf("%lld", &test);
    while(test--){
        scanf("%lld %lld", &n, &S);

        while(!pq.empty()) pq.pop();

        for(int i = 1; i <= n; i++){
            adj_list[i].clear();
            visited[i] = false;
            leaves[i] = 0;
        }

        for(int i = 1; i < n; i++){
            scanf("%lld %lld %lld", &uu, &vv, &ww);
            adj_list[uu].push_back({vv, ww});
            adj_list[vv].push_back({uu, ww});
        }

        sum = 0;
        dfs(1);

        ans = 0;
        while(sum > S){
            ans++;
            pair<int, pair<int, int> > details = pq.top();
            pq.pop();

            subtractable = details.first;
            curr_wt = details.second.first;
            curr_leafs = details.second.second;

            sum -= subtractable;
            curr_wt /= 2;

            //cout << subtractable << " subtracted" << endl;

            pq.push({curr_wt*curr_leafs - (curr_wt/2)*curr_leafs, {curr_wt, curr_leafs}});
        }

        printf("%lld\n", ans);


        while(!pq.empty()) pq.pop();

        for(int i = 1; i <= n; i++){
            adj_list[i].clear();
            visited[i] = false;
            leaves[i] = 0;
        }
    }

}
