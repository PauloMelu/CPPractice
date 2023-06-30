#include<iostream>
#include<math.h>
using namespace std;

int solution(int n){
	long x = 0;
	long y = 0;
	for(int i=0;i<n;i++){
		long a=x;
		x = (3*x + 4*y + 1)%10006699;
		y = (2*a + 3*y + 1)%10006699;
	}
	
	return x;
}

int main(){
	int n=1;
	int *a = new int(0);
	int *b = new int(1);
	int as = 0;
	int bs = -1;
	int i = 0;
	while(n!=0){
		cin >> n;
		if(n==0)
			break;
		
		//cout << "Case #" << ++i << ": " << solution(n) <<endl;

		if(i%2!=0){
			as += 2;
			a = new int(as);
			for(int j=0;j<bs;j++)
				a[j] = b[j];
			a[i++] = solution(n);
		}else{
			bs += 2;
			b = new int(bs);
			for(int j=0;j<as;j++)
				b[j] = a[j];
			b[i++] = solution(n);
		}
	}
	
	if(as>bs)
		for(int j=0;j<i;j++)
			cout << "Case " << j+1 << ": " << a[j] <<endl;
	else
		for(int j=0;j<i;j++)
			cout << "Case " << j+1 << ": " << b[j] <<endl;
	
	return 0;
}	
