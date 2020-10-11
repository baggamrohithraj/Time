#include<bits/stdc++.h> 
#include<unistd.h>
using namespace std;
int main() {
	int i,j,k,c=60;
	int d;
	int hr,min,sec;
	cout<<endl<<"hr : ";
	cin>>hr;
	cout<<endl<<"min : ";
	cin>>min;
	cout<<endl<<"sec : ";
	cin>>sec;
	for(i=hr;i>=0;i--)
	{
		for(j=min;j>=0;j--) {
			{
				if(i==hr&&j==min) {
					c=sec;
				}
				for(k=c-1;k>=0;k--) {
					system("cls");
						cout<<"\n \n \n \t \t \t"<<i<<" hr : "<<j<<" min : "<<k<<" sec";	
					sleep(1);
				}
				if(min-1==j) {
					return 0;
				}
			}
			if(hr-1==i) {
					return 0;
				}
		}
	}
	return 0;
}
