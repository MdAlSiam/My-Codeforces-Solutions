#include <bits/stdc++.h>
using namespace std;

//map<string, int> taken;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    int n, m;
    scanf("%d %d", &n, &m);

    string str[n], justopp[n];
    bool blocked[n];
    int pair[n];
    memset(blocked, false, sizeof(blocked));
    memset(pair, -1, sizeof(pair));

    for(int i = 0; i < n; i++){
    	cin >> str[i];
    	justopp[i] = str[i];
    	reverse(justopp[i].begin(),justopp[i].end());
    }

    //cout << "Point 1" << endl;

    int pk = 0;
    for(int i = 0; i < n; i++){
    	if(!blocked[i]){
    		for(int j = i+1; j < n; j++){
    			if(justopp[i] == str[j] && !blocked[j]){
    				pair[i] = j;
    				blocked[j] = true;
    				pk++;
    				break;
    			}
    		}
    	}
    }

    //cout << "Point 2" << endl;

    string middlers;
    int one = 0;
    for(int i = 0; i < n; i++){
    	if(pair[i] == -1 && str[i] == justopp[i] && !blocked[i]){
    		middlers = str[i];
    		one = 1;
    		break;
    	}
    }

    //cout << "Point 3" << endl;

    cout << 2*pk*m + one*m << endl;

    for(int i = 0; i < n; i++){
    	if(pair[i] != -1) cout << str[i];
    }
    if(one) cout << middlers;
    for(int i = n-1; i >= 0; i--){
    	if(pair[i] != -1) cout << justopp[i];
    }

	return 0;
}
