#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll n, a, b, da, db;
vector<ll> adj_list[100005];
ll level[100005];

void dfs(ll dad, ll son) {
    if (dad == -1) {
        level[son] = 0;
    }
    else {
        level[son] = level[dad] + 1;
    }

    for (ll son_of_son : adj_list[son]) {
        if (son_of_son == dad) {
            continue;
        }
        dfs(son, son_of_son);
    }
}

void solve() {
    scanf("%lld %lld %lld %lld %lld", &n, &a, &b, &da, &db);

    for (ll i = 0; i <= n; i++) {
        adj_list[i].clear();
    }
    for (ll i = 1; i < n; i++) {
        ll u, v;
        scanf("%lld %lld", &u, &v);
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    dfs(-1, a);

    if (level[b] <= da) {
        printf("Alice\n");
        return;
    }

    ll id = 1;
    for (ll i = 1; i <= n; i++) {
        if (level[i] > level[id]) {
            id = i;
        }
    }

    dfs(-1, id);

    id = 1;
    for (ll i = 1; i <= n; i++) {
        if (level[i] > level[id]) {
            id = i;
        }
    }

    if (level[id] > 2*da and db > 2*da) {
        printf("Bob\n");
    }
    else {
        printf("Alice\n");
    }
}

int main() {
    ll test;
    scanf("%lld", &test);

    while (test--) {
        solve();
    }
}
