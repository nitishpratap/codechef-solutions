#include <iostream>
#include <bits/stdc++.h>
#include <utility>
//#include <boost/multiprecision/cpp_int.hpp>

//using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0)
	{
	int n,i;
	int p=1;
	cin>>n;
	for(i=1;i<=n;i++)
	        p=p*i;

	cout<<p<<endl;

	t--;
	}
	return 0;
}
