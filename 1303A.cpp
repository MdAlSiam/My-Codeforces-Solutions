#include <bits/stdc++.h>
using namespace std;

void fileornot(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main(){
	fileornot();
	int test;
	scanf("%d", &test);

	while(test--){
		string str;
		cin >> str;
		int len = str.length();

		int prev = -1, ans = 0;

		for (int i = 0; i < len; ++i)
		{
			if(str[i] == '1' && str[i-1] == '0' && prev != -1 && i > 0){
				ans += (i - prev -1);
			}

			if(str[i] == '1') prev = i;
		}

		cout << ans << endl;
	}
}