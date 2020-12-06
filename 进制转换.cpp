#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//给定一个十进制数M，以及需要转换的进制数N。将十进制数M转化为N进制数
int main()
{
    string s,table="0123456789ABCDEF";
    int m,n;
    cin>>m>>n;
    bool flag=false;
    if(m<0)
    {
        m=0-m;
        flag=true;
    }
    while(m)
    {
        s+=table[m%n];
        m/=n;
    }
    if(flag)
    {
        s+='-';
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}