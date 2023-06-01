#include<iostream>
#include<string>
using namespace std;

int solution(string n, int s){
    int max = 0;
    for(int i=0;i<s+1;i++){
        string high = n.substr(i, n.length()-s);
        string left = n;
        left.erase(i, n.length()-s);
        int sum = stoi(high);
        for(int i=0;i<left.length();i++){
            sum += int(left.at(i)) - 48;
        }
        if(sum > max)
            max  = sum;
    }
    return max;
}

int main(){
    int t;
    cin >> t;
    int a[t];
    for(int i=0;i<t;i++){
        string n;
        int s;
        cin >> n >> s;
        a[i] = solution(n, s);
    }
    for(int i=0; i<t; i++)
        cout << "Case " << i+1 << ": " << a[i] << "\n";
    return 0;
}