#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
	ll num;
	while(scanf("%lld", &num) == 1){
		ll kount = 0;
		while(num != 0){
			if(num >= 5){num -= 5; kount++; continue;}
			if(num >= 4){num -= 4; kount++; continue;}
			if(num >= 3){num -= 3; kount++; continue;}
			if(num >= 2){num -= 2; kount++; continue;}
			if(num >= 1){num -= 1; kount++; continue;}
		}
		printf("%lld\n", kount);
	}
}
