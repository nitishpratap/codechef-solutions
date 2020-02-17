#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);
    for(int i=0;i<t;i++)
        cout<<arr[i]<<endl;
    return 0;
}
