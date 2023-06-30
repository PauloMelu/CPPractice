#include<iostream>
using namespace std;

bool check(int s, int r, int c, char ** arr){
	for(int i=0;i<s;i++){
		for(int j=0;j<s;j++){
			if(arr[r+i][c+j]!='.')
				return false;
		}
	}
	return true;
}

void solution(int s, int r, int c, char ** arr){
	int count = 0;
	for(int i=0;i<r-s+1;i++){
		for(int j=0;j<c-s+1;j++){
			if(check(s, i, j, arr))
				count++;
		}
	}
	if(count!=0)
		cout << s << "*" << s << ": " << count << endl;
	else{
		if(s==1)
			cout << "Wala" <<endl;
		return;
	}
	solution(s+1, r, c, arr);
}

int main(){
	
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int r, c;
		cin >> r >> c;
		char ** arr = new char*[r];
		for(int j=0;j<r;j++){
			arr[j] = new char[c];
			for(int k=0;k<c;k++)
				cin >> arr[j][k];
		}
		cout << "Case " << i+1 << ":" <<endl;
		solution(1, r, c, arr);
		/*
		for(int j=0;j<r;j++){
			for(int k=0;k<c;k++)
				cout << arr[j][k];
			cout <<endl;
		}
		*/

	}
	
	return 0;
}
