#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      char str[10000];
      for(int i=0;i<n;i++)
      {
          cin>>str[i];
      }
      for(int i=n-1;i>n-k;i--)
      {
          if(str[i]=='H')
            for(int j=0;j<n;j++)
          {
              if(str[j]=='H')
                str[j]='T';
              else
                str[j]='H';
          }
      }
      int count =0;
      for(int i=0;i<n-k;i++)
      {
          if(str[i]=='H')
            count++;
      }
      cout<<count<<endl;
    }

    return 0;
}
