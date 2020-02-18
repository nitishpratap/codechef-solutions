#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
      cin >>t;
      while (t--)
      {
            int n,r,last,first,sum=0;
            cin >> n;
            last = n%10;
            while(n>0)
            {
                  r = n%10;
                  sum = sum*10+r;
                  n = n/10;

            }
            first = sum%10;
            sum = last + first;
            cout << sum << endl;
      }

	return 0;
}
