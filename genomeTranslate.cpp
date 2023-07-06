#include <iostream>
#include <string.h>
using namespace std;

string translate(string s){
	string i = "UCAG";
	int v = i.find(s[2]) + i.find(s[1])*16 + i.find(s[0])*4;
	if(v==34 || v==35 || v==50)
		return "STOP";
	else if(v<=1)
		return "F";
	else if(v<=7)
		return "L";
	else if(v<=10)
		return "I";
	else if(v==11)
		return "M";
	else if(v<=15)
		return "V";
	else if(v<=19 || v==56 || v==57)
		return "S";
	else if(v<=23)
		return "P";
	else if(v<=27)
		return "T";
	else if(v<=31)
		return "A";
	else if(v<=33)
		return "Y";
	else if(v<=37)
		return "H";
	else if(v<=39)
		return "Q";
	else if(v<=41)
		return "N";
	else if(v<=43)
		return "K";
	else if(v<=45)
		return "D";
	else if(v<=47)
		return "E";
	else if(v<=49)
		return "C";
	else if(v==50)
		return "STOP";
	else if(v==51)
		return "W";
	else if(v<=59)
		return "R";
	else
		return "G";
}

string div(string seq){
	string r = "";
	while(seq!=""){
		string a = translate(seq.substr(0,3));
		if(a=="STOP")
			break;
		r.append(a);
		seq.erase(0,3);
	}
	return r;
}

int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		string seq;
		cin >> seq;
		cout << div(seq) <<endl;
	}

}
