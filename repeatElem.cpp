#include <iostream>
#include <string.h>
using namespace std;

bool check(string str, int m, int b){
	string s = str;
	string arr[s.length()/m];
	int qw=0;
	while(s.length()>=m){
		arr[qw++] = s.substr(b, m);
		s.erase(b, m);
	}


	cout << sizeof(arr)/sizeof(arr[0]) <<endl;
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
		cout << arr[i] << " ";
	cout <<endl;
	

	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		for(int j=i;j<sizeof(arr)/sizeof(arr[0]);j++)
			if(i!=j && arr[i]==arr[j]){
				cout << arr[i] <<endl;
				return true;
			}
	}
	if(b<str.length()/m)
		return check(str, m, b+1);
	return false;
}

void solution(string s){
	int m = s.length()/2;
	bool done = true;
	while(done){
		if(check(s, m, 0) || m<1)
			break;
		m--;
	}

}

int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		string s;
		cin >> s;
		solution(s);
	}

}
