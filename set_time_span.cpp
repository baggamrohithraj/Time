#include<bits/stdc++.h>
#include <unistd.h>

using namespace std;
int main() {
	int n;
	cout<<"Enter time span between outputs : ";
	cin>>n;
	for(int i=0;i<10;i++) {
		cout<<i<<endl;
		sleep(n);
	}
	
}
