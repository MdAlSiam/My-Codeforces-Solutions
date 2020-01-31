#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <list>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1.0)
#define pb push_back
#define Sort(x) sort(x.begin(), x.end())
#define For(i, x, y) for(ll i = x; i < y; i++)
#define pii pair < int, int >
#define ppi pair < pii, int >
#define ff first
#define ss second

struct Contestant{
    bool solved[10];
    int attempt[10];
    int penalty;
    int kount;
};

map <int, Contestant> Contest;
vector <int> Index;

bool compare(int a, int b){
    if(Contest[a].kount == Contest[b].kount){
        if(Contest[a].penalty == Contest[b].penalty){
            return a < b;
        }
        return Contest[a].penalty < Contest[b].penalty;
    }
    return Contest[a].kount > Contest[b].kount;
}

int main(){
    int T;
    string str;
    stringstream ss;
    getline(cin, str);
    ss << str;
    ss >> T;
	getline(cin, str);
	while(T--){
        Contest.clear();
        Index.clear();
        while(getline(cin, str)){
            if(str.empty()) break;
            int tn, pn, te;
            string x;
            ss.clear();
            ss << str;
            ss >> tn  >> pn >>  te >> x;

            if(Contest.find(tn) == Contest.end()){
                Contestant Con;
                memset(Con.solved, false, sizeof Con.solved);
                memset(Con.attempt, 0,  sizeof Con.attempt);
                Con.penalty = 0;
                Con.kount = 0;

                Index.pb(tn);
                Contest[tn] = Con;
            }

            if(x == "C" || x == "I"){
                if(Contest[tn].solved[pn] == true) continue;

                if(x == "C"){
                    Contest[tn].solved[pn] = true;
                    Contest[tn].kount++;
                    Contest[tn].penalty += (te + 20*Contest[tn].attempt[pn]);
                }
                else Contest[tn].attempt[pn]++;
            }
        }

        sort(Index.begin(), Index.end(), compare);

        for(int i = 0; i < Index.size(); i++){
            cout << Index[i] << " " << Contest[Index[i]].kount << " " << Contest[Index[i]].penalty << endl;
        }
        if(T) cout << endl;
	}
	return 0;
}
