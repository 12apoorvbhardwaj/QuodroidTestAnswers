#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
bool canbuy(int s1,int s2,int s3,int price)
{
	if((s1+s2 >= price) || (s2+s3 >= price) || (s1+s3 >= price))
	return true;
	else
	return false;
}


int main() {
	int n;
	cout<<"Play Station Code " << endl;
	cout<<" Enter the Number of Test Cases "<<endl;
	cin>>n;
	int s1,s2,s3,price;
	for(int i=0;i<n;i++){
		cin >>s1>>s2>>s3>>price;
		if(canbuy(s1,s2,s3,price)){
			cout<<"YES"<<endl;
		}
		else
		cout<<" NO" << endl;
	}
	return 0;
}