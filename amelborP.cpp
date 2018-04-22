#include <bits/stdc++.h>

using namespace std;

#define lli long long int

lli invert(string n){
	int tam = n.length();
	char aux[18]={};
	for(int i = (tam-1); i >= 0; i--){
		aux[tam-1-i] = n[i];
	}
	return atoll(aux);
	
}

int main(){

	lli l = 0;
	cin>>l;
	cout<<invert(to_string(l))<<endl;
	

	return 0;
}
