#include <iostream>

using namespace std;


int main()
{
    //cout << "Hello world!" << endl;
   int n;
   cin>>n;
   if(n%4==0)
   {
       n=n+1;
   }
   else
   {
       n--;
   }
   cout<<n<<endl;

    return 0;
}
