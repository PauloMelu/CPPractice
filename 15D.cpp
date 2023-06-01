#include<iostream>
#include<string>
#include<time.h>
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
    clock_t start_time = clock(); //start time
    int a[t];
    for(int i=0;i<t;i++){
        string n;
        int s;
        cin >> n >> s;
        a[i] = solution(n, s);
    }
    
    clock_t end_time1 = clock(); //end time
    for(int i=0; i<t; i++)
        cout << "Case " << i+1 << ": " << a[i] << "\n";

    clock_t result = end_time1 - start_time; // result
    double r = (double)result/CLOCKS_PER_SEC;
	cout<<fixed<< r <<" seconds"<<endl;
    return 0;
}