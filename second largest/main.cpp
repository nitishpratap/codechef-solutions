#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        n=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+n);
        cout<<arr[1]<<endl;

    }
    return 0;
}
