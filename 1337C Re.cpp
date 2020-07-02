#include <bits/stdc++.h>
using namespace std;

#define maxn 200005

int n, k;
list<int> adj_list[maxn];
list<int>::iterator it;

int level[maxn], subordinate[maxn], profit[maxn];

void dfs(int dad, int son){

    level[son] = level[dad] + 1;
    subordinate[son] = 1;

//    cout << "->" << dad << "->" << son << endl;
//
//     for(it = adj_list[son].begin(); it != adj_list[son].end(); it++){
//        cout << "e " << *it << endl;
//    }

    for(it = adj_list[son].begin(); it < adj_list[son].end(); it++){
        int grandson = *it;

        if(dad == grandson) continue;
        dfs(son, grandson);
        subordinate[son] += subordinate[grandson];
    }

    profit[son] = subordinate[son] - 1 - level[son];
}

int main(){

    //freopen("output.txt", "w", stdout);

    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n-1; i++){
        int t1, t2;
        scanf("%d %d", &t1, &t2);
        adj_list[t1].push_back(t2);
        adj_list[t2].push_back(t1);
    }

    level[0] = -1;
    //dfs(0, 1);

    for(int i = 1; i <= n; i++){
            cout << "i : ";
        for(it = adj_list[i].begin(); it != adj_list[i].end(); it++){
            cout << *it << " ";
        }
            cout << endl;
    }

    sort(profit, profit+n+1, greater<int>());

    int ans = 0;
    for(int i = 1; i <= n-k; i++)
        ans += profit[i];

    printf("%lld\n", ans);

}
