#include <bits/stdc++.h>
using namespace std;

bool checkKepler(double T1, double T2, double R1, double R2){
    if((T1 <=0) || (T2 <=0) || (R1 <=0) || (R2 <=0)) {
        return false;
    }
    double p1 = 1;
    double p2 = 1;
    if(R1 < T1 || R2 < T2){
        p1 = ((T1*T1)/(R1*R1*R1));
        p2 = ((T2*T2)/(R2*R2*R2));
    }
    else{
        p1 = ((R1*R1*R1)/(T1*T1));
        p2 = ((R2*R2*R2)/(T2*T2));
    }
    
	if(p1 == p2){
	    return true;
	}
	return false;
    
}

int main() {
	int T;
	cin>>T;
	while(T--) {
	    double T1, T2, R1, R2;
	    cin>>T1>>T2>>R1>>R2;
	    if(checkKepler(T1, T2, R1, R2)){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	    
	}
	return 0;
}

//https://www.codechef.com/JAN221C/problems/KEPLERSLAW