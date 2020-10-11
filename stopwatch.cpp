#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
int main() {
	int n,j,h,c=60;
	double i;
	int hr,min,sec;
	
	cout<<endl<<"hr : ";
	cin>>hr;
	cout<<endl<<"min : ";
	cin>>min;
	cout<<endl<<"sec : ";
	cin>>sec;
start:;
  for(h=0;h<=hr;h++)
  {
	for(j=0;j<=min;j++) 
	{
		if(h==hr&&min==j) {
			c=sec;
		}
	for(int k=0;k<=c;k++) {
		system("cls");
		cout<<"\n \n \n \t \t \t"<<h<<" hr : "<<j<<" min : "<<k<<" sec";	
		if(h>=12) {
			h = h-12;
		}
		sleep(1);	
	}
	if(j==min) {
		return 0;
	}
}
		if(h==hr) {
			return 0;
		}
	}
goto start;
}
