#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h;
	while(scanf("%lld %lld", &n, &h) == 2){
		for(int i = 1; i < n; i++){
			double ans = sqrt(i*1.00* ((h*1.00)/(n*1.00)) *h*1.00 );
			printf("%.8lf ", ans);
		}
		printf("\n");
	}
	return 0;
}
