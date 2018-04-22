#include <bits/stdc++.h>

using namespace std;

#define lli long long int

int ehDespojado(lli n){
	if(n == 1) return 0;
	int primo = 1;
	int raiz = sqrt(n);
	for(lli i = 2; i <=raiz; i++){
		if(n % (i*i) == 0) return 0;
		if(n % i == 0) primo = 0;
	}
	return !primo;
}

int main(){
	int ans = 0;
	long long n= 0;
	
	while(scanf("%lli",&n) != EOF){
		lli raiz = sqrt(n);
		for(long long i = 1; i <= raiz; i++){
			if(n % i == 0){
				ans+=ehDespojado(i);
				if(n != n/i) ans+=ehDespojado(n/i);
			}
		}
		cout<<ans<<endl;	
		ans = 0;
	}

	return 0;
}
