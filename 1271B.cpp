#include <bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	scanf("%d", &n);

	char str[n];
	scanf(" %s", str);

	int ans[n+n+n+1], index = 0;

	for(int i = 0; i < n-1; i++){
		if(str[i] == 'B'){
			str[i] = 'W';
			str[i+1] == 'B' ? str[i+1] = 'W' : str[i+1] = 'B';
			ans[index++] = i+1;
		}
	}

	if(str[n-1] == 'B' && n%2 == 0){
		printf("-1\n");
		return 0;
	}
	else if(str[n-1] == 'B'){
		for(int i = 1; i <= n-1; i += 2)
			ans[index++] = i;
	}

	printf("%d\n", index);
	for(int i = 0; i < index; i++)
		printf(i == index-1 ? "%d\n" : "%d ", ans[i]);
}