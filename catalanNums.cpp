#include <iostream>
#include <time.h>
using namespace std;

unsigned long long solution(int n, unsigned long long a){
	if(n>0){
		a *= (n*4+2);
		a /= (n+2);
	}
	return a;
}

int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		double start = clock();
		unsigned long long a = 1;
		for(int i=0;i<n;i++)
			a = solution(i-1, a);
		double end = clock();
		cout << "Case " << i+1 << ": " << a <<endl;
		double tim = (end - start) / double(CLOCKS_PER_SEC);
		cout << fixed << tim << endl;
	}
}
