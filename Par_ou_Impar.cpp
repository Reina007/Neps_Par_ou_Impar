#include <bits/stdc++.h>
using namespace std;

int main(){
	int b, c;
	cin >> b >> c;

	if(b > 10 || c > 10){
		return 0;
	}else{
		if((b+c) % 2 == 0){
			cout << "Bino" << endl;
		}else{
			cout << "Cino" << endl;
		     }	
	}
}
