#include <bits/stdc++.h>
 using namespace std;

#define MAX 1000001
#define lli long long int

int main(){
	lli acum = 0;
	lli N = MAX;
	int VALUE = 0;
	vector<lli> aux(MAX);
	vector<lli> somaAcum(MAX);
	for(lli i = 1; i < N; i++){
		for(lli j = 1; j < N; j+=i){
			aux[j] +=i;	
		}
	}
	
	somaAcum[0] = 0;
	for(int i = 1; i <= MAX; i++){
		somaAcum[i] = somaAcum[i-1]+aux[i+1];
	}
	
	while(cin>>VALUE, VALUE != 0){
		cout<<somaAcum[VALUE]<<endl;
	}

	return 0;
}
