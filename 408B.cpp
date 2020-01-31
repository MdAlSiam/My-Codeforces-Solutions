#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main(){
	char a[1003], b[1003];
	scanf("%s\n%s", a, b);
	int ager[26];
	int porer[26];
	for(int i = 0; i < 26; i++) ager[i] = porer[i] = 0;
	int len1 = strlen(a);
	int len2= strlen(b);
	for(int i = 0; i < len1; i++){
		ager[a[i] - 'a']++;
	}
	for(int i = 0; i < len2; i++){
		porer[b[i] - 'a']++;
	}

	int kount = 0;
	for(int i = 0; i < 26; i++){
		if(ager[i] == 0 && porer[i] == 0) {}
		else if(porer[i] == 0) {}
		else if((ager[i] == 0) && (porer[i] > 0)) {kount = -1; break;}
		else if(ager[i] >= porer[i]) kount += porer[i];
		else if(ager[i] <= porer[i]) kount += ager[i];
	}
	printf("%d\n", kount);
}
