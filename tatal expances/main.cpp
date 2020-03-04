#include <iostream>

using namespace std;

int main()
{
//cout << "Hello world!" << endl;
  int t;
  cin>>t;
  while(t--)
  {
      int q,p;
      float discount;
      float total;
      cin>>q>>p;
      if(q<1000)
      {
          cout<<q*p<<".000000"<<endl;
      }
      else if(q>=1000)
      {
          discount=p*q*0.1;
          int total;
          total=p*q-discount;
          cout<<total<<".000000"<<endl;}
  }

    return 0;
}
