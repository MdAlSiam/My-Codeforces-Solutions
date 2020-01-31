#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
	ll num;
	scanf("%lld", &num);
	ll sum = 0, bijorkount = 0, bijormini = INT_MAX;
	while(num--){
		ll temp;
		scanf("%lld", &temp);
		sum += temp;
		if(temp & 1){
			bijorkount++;
			if(temp < bijormini) bijormini = temp;
		}
	}
	if(bijorkount & 1) sum -= bijormini;
	printf("%lld\n", sum);
}
