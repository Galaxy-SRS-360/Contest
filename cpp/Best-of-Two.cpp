#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
int t;
	cin>>t;
	int a[6];
	while(t--){
	    for(int i=0;i<6;i++){
	        cin>>a[i];
	    }
	
	    sort(a,a+3);
	    sort(a+3,a+6);
	    if((a[1]+a[2])>(a[4]+a[5])){
	        cout<<"Alice \n";
	    }
	    else if((a[1]+a[2])<(a[4]+a[5])){
	        cout<<"Bob \n";
	    }
	    else 
	         cout<<"Tie \n";
	   
	}
	return 0;
}