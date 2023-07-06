#include <iostream>
#include <time.h>
using namespace std;
 
unsigned long int catalanDP(unsigned int n)
{
    unsigned long int catalan[n + 1];
 
    catalan[0] = catalan[1] = 1;
 
    for (int i = 2; i <= n; i++) {
        catalan[i] = 0;
        for (int j = 0; j < i; j++)
            catalan[i] += catalan[j] * catalan[i - j - 1];
    }
 
    return catalan[n];
}
 
int main()
{
    for (int i = 0; i < 36; i++){
        double start = clock();
	cout << catalanDP(i) <<endl;
    	double end = clock();
	double tim = (end - start) / double(CLOCKS_PER_SEC);
	cout << fixed << tim <<endl;
    }
    return 0;
}
