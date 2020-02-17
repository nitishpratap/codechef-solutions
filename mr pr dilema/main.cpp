#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int x;
    while(t--)
    {
        long a,b,c,d,small,large;

        cin>>a>>b>>c>>d;
            small=min(c,d);
            large=max(c,d);
            if(a==b&&small==large)
                cout<<"YES"<<endl;
            else if(a==b&&large!=large)
                cout<<"NO"<<endl;
            else if(small==large)
                cout<<"NO"<<endl;
            else if(abs(a-b)%(large-small)==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

    }
    return 0;
}
