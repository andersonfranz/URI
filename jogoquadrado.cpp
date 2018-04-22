#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string m,n,fav,name,auxname;
	char a[1],b[1];
	int k;
	cin>>m>>n>>k;
	cin>>fav;
	cin>>name;
	auxname = name;
	string melhor = name;;
	int maior = 0;
	int tam = name.length();
	int an = 0, bn = 0,max = 0;
	while(k--){
		cin>>a>>b;
		for(int i = 0; i < tam; i++){
			if(a[0] == name[i]){ name[i] = b[0]; an++;}
			if(b[0] == name[i]){ auxname[i] = a[0]; bn++;}	
		}
		cout<<name<<endl;
		cout<<auxname<<endl;
		if(an > bn){max = an; melhor = name;}else{max = bn; name = auxname; melhor = name;}
		if(maior < max) {
			maior = max;
		}	
	}
	//cout<<maior<<endl;
	//cout<<melhor<<endl;
	

	return 0;
}
