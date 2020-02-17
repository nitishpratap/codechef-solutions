#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    long a,b;
    cin>>a>>b;
    if(a%5==0 && a<b)
    {
        cout<<b-a-0.50<<0<<endl;
    }
    else if(a%5!=0)
        cout<<b<<".00"<<endl;
    else if(a>b)
        cout<<b<<".00"<<endl;

    return 0;
}
