#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int ara[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &ara[i][j]);
		}
	}

	int temp = 0;
	for(int i = 0; i < n; i++) temp += ((ara[i][i] * ara[i][i]));
	int ans = temp % 2;

	int q;
	scanf("%lld", &q);
	while(q--){
		int task, ro, col;
		scanf("%d", &task);
		if(task == 3){

			//cout << "temp = " << temp << endl;
			//temp %= 2;
			printf("%d", ans);
		}
		else if(task == 2 || task == 1){
			scanf("%d", &ro);
			//if(ara[ro-1][ro-1] == 0) ans = 1, ara[ro-1][ro-1] = 1;
			//else ans = 0, ara[ro-1][ro-1] = 0;
			if(ans == 0) ans = 1;
			else ans = 0;
		}
	}
	printf("\n");
}
