#include <iostream>

using namespace std;

int main()
{
   // cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
        {
            int n,rem;
            long sum=0;
            cin>>n;
            int arr[n];
            int i=0;
            for(int i=0;i<=n;i++)
            {
                while(n>0)
                {
                    rem=n/10;
                    arr[i]=rem;
                    n=n/10;
                    ;
                }
            }
            for(int i=0;i<=n;i++)
            {cout<<arr[i];}
            //cout<<sum<<endl;

        }
    return 0;
}
