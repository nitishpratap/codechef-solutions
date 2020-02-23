#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        int arr[100];
        long product=1;
        cin>>n;
        for(int i=0;i<n;i++)
            {cin>>arr[i];
            product=product*arr[i];}
            int x=product;
        for(int i=1;i<=product;i++)
        {
            if(product%i==0)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
