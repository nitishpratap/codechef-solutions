#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
        int t;
        cin>>t;
        while(t--)
        {
        int num;
        cin>>num;
        int total;
        int one,two,four,eight,sixteen,thrtytwo,sixfour,onetwo8,two56,five12,one1024,two048;
        if(num==0)
            cout<<"0"<<endl;
        else if(num==1)
            cout<<"1"<<endl;
        else if(num==2)
            cout<<"1"<<endl;
        else if(num==3)
            cout<<"2"<<endl;
        else if(num==4)
            cout<<"2"<<endl;
        else if(num==5)
            cout<<"2"<<endl;
        else if(num==6)
            cout<<"2"<<endl;
        else if(num==7)
            cout<<"3"<<endl;
        else if(num==8)
            cout<<"1"<<endl;
        else if(num==9)
            cout<<"2"<<endl;
            else if(num==10)
            cout<<"2"<<endl;
        else if(num>10 && num<16)
        {
            eight=num/8;
            num=num%8;
            //cout<<num;
            four=num/4;
            num=num%4;
            two=num/2;
            num=num%2;
            one=num;
            total=eight+four+two+one;
            cout<<total<<endl;
        }
        else if(num==16)
            cout<<"1"<<endl;
        else if(num>16 && num<32)
        {
            sixteen=num/16;
            num=num%16;
            eight=num/8;
            num=num%8;
            //cout<<num;
            four=num/4;
            num=num%4;
            two=num/2;
            num=num%2;
            one=num;
            total=sixteen+eight+four+two+one;
            cout<<total<<endl;

        }
        else if(num==32)
            cout<<"1"<<endl;
        else if(num>32 &&num<64)
        {
            thrtytwo=num/32;
            num=num%32;
             sixteen=num/16;
            num=num%16;
            eight=num/8;
            num=num%8;
            //cout<<num;
            four=num/4;
            num=num%4;
            two=num/2;
            num=num%2;
            one=num;
            total=thrtytwo+sixteen+eight+four+two+one;
            cout<<total<<endl;
        }
        else if(num==64)
            cout<<"1"<<endl;
        else if(num>64 &&num<128)
        {
            sixfour=num/64;
            num=num%64;
            thrtytwo=num/32;
            num=num%32;
             sixteen=num/16;
            num=num%16;
            eight=num/8;
            num=num%8;
            //cout<<num;
            four=num/4;
            num=num%4;
            two=num/2;
            num=num%2;
            one=num;
            total=sixfour+thrtytwo+sixteen+eight+four+two+one;
            cout<<total<<endl;
        }
        else if(num==128)
            cout<<"1"<<endl;
        else if(num>128 &&num<256)
        {
            onetwo8=num/128;
            num=num%128;
            sixfour=num/64;
            num=num%64;
            thrtytwo=num/32;
            num=num%32;
             sixteen=num/16;
            num=num%16;
            eight=num/8;
            num=num%8;
            //cout<<num;
            four=num/4;
            num=num%4;
            two=num/2;
            num=num%2;
            one=num;
            total=onetwo8+sixfour+thrtytwo+sixteen+eight+four+two+one;
            cout<<total<<endl;
        }
        else if(num==256)
            cout<<"1"<<endl;
        else if(num>256 &&num<512)
        {
            two56=num/256;
            num=num%256;
            onetwo8=num/128;
            num=num%128;
            sixfour=num/64;
            num=num%64;
            thrtytwo=num/32;
            num=num%32;
             sixteen=num/16;
            num=num%16;
            eight=num/8;
            num=num%8;
            //cout<<num;
            four=num/4;
            num=num%4;
            two=num/2;
            num=num%2;
            one=num;
            total=two56+onetwo8+sixfour+thrtytwo+sixteen+eight+four+two+one;
            cout<<total<<endl;
        }
        else if(num==512)
            cout<<"1"<<endl;
        else if(num>512 &&num<1024)
        {
            five12=num/512;
            num=num%512;
            two56=num/256;
            num=num%256;
            onetwo8=num/128;
            num=num%128;
            sixfour=num/64;
            num=num%64;
            thrtytwo=num/32;
            num=num%32;
             sixteen=num/16;
            num=num%16;
            eight=num/8;
            num=num%8;
            //cout<<num;
            four=num/4;
            num=num%4;
            two=num/2;
            num=num%2;
            one=num;
            total=five12+two56+onetwo8+sixfour+thrtytwo+sixteen+eight+four+two+one;
            cout<<total<<endl;
        }
else if(num==1024)
            cout<<"1"<<endl;
        else if(num>1024 &&num<2048)
        {
            one1024=num/1024;
            num=num%1024;
            five12=num/512;
            num=num%512;
            two56=num/256;
            num=num%256;
            onetwo8=num/128;
            num=num%128;
            sixfour=num/64;
            num=num%64;
            thrtytwo=num/32;
            num=num%32;
             sixteen=num/16;
            num=num%16;
            eight=num/8;
            num=num%8;
            //cout<<num;
            four=num/4;
            num=num%4;
            two=num/2;
            num=num%2;
            one=num;
            total=one1024+five12+two56+onetwo8+sixfour+thrtytwo+sixteen+eight+four+two+one;
            cout<<total<<endl;
        }
        else if(num==2048)
            cout<<"1"<<endl;
        else if(num>2048)
        {
            two048=num/2048;
            num=num%2048;
            one1024=num/1024;
            num=num%1024;
            five12=num/512;
            num=num%512;
            two56=num/256;
            num=num%256;
            onetwo8=num/128;
            num=num%128;
            sixfour=num/64;
            num=num%64;
            thrtytwo=num/32;
            num=num%32;
             sixteen=num/16;
            num=num%16;
            eight=num/8;
            num=num%8;
            //cout<<num;
            four=num/4;
            num=num%4;
            two=num/2;
            num=num%2;
            one=num;
            total=two048+one1024+five12+two56+onetwo8+sixfour+thrtytwo+sixteen+eight+four+two+one;
            cout<<total<<endl;
        }
        }

    return 0;
}
