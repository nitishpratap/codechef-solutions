#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
    {
        long  num;
        cin>>num;
        long count=0,rem;
        while(num>0)
        {
            rem=num%10;
            if(rem==4)
                {count++;
                }
            num=num/10;

        }
        cout<<count<<endl;

    }
    return 0;
}
