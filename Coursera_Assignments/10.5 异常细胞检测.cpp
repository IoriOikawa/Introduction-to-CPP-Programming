#include <iostream>
using namespace std;
int main()
{
	int a[100][100],count = 0,n;
	bool b1=false,b2=false,b3=false,b4=false;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	} 
	 for(int i=1;i<n-1;i++){
		for(int j=1;j<n-1;j++){
			b1=a[i][j-1]-a[i][j]>=50;
			b2=a[i][j+1]-a[i][j]>=50;
			b3=a[i-1][j]-a[i][j]>=50;
			b4=a[i+1][j]-a[i][j]>=50;
			if(b1&&b2&&b3&&b4) count++;
		}
	 } 
	cout<<count<<endl;
	return 0;
}