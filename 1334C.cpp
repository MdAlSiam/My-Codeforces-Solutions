#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

void fileornot(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main(int argc, char const *argv[])
{
	fileornot();

	ll test;
	scanf("%lld", &test);

	while(test--){

	ll n;
	scanf("%lld", &n);

	ll health[n+n+10];
	ll next_attack[n+n+10];
	ll required_hit[n+n+10];
	ll cum_required_hit[n+n+10];

	for(ll i = 1; i <= n; i++){
		ll t1, t2;
		scanf("%lld %lld", &t1, &t2);
		health[i] = health[i+n] = t1;
		next_attack[i] = next_attack[i+n] = t2;
	}

	for(ll i = 1; i <= n+n; i++){
		if(i == 1){
			required_hit[i] = 0;
			cum_required_hit[i] = 0;
			continue;
		}
		if(health[i] <= next_attack[i-1]) required_hit[i] = 0;
		else required_hit[i] = health[i] - next_attack[i-1];

		cum_required_hit[i] = cum_required_hit[i-1] + required_hit[i];
	}

	ll ans = LONG_LONG_MAX;

	for (int i = 1; i <= n; ++i){
		ll current = health[i] + (cum_required_hit[i+n-1] - cum_required_hit[i]);
		ans = min(ans, current);
	}

	printf("%lld\n", ans);

	}//test

	return 0;
}
