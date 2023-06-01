#include<iostream>
using namespace std;

int solution(int n, int p[]){
    int prod = 1;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int s = p[i] + p[j];
            prod *= s;
        }
    }
    return prod;
}

int main(){
    int t;
    cin >> t;
    int a[t];
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int p[n];
        for(int i=0;i<n;i++){
            cin >> p[i];
        }
        a[i] = solution(n, p)%1000000007;
    }
    for(int i=0; i<t; i++)
        cout << "Case " << i+1 << ": " << a[i] << "\n";
}