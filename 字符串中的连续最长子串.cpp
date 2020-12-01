//读入一个字符串str，输出字符串str中的连续最长的数字串
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2,str3;
    cin>>str1;
    for(int i=0;i<=str1.size();i++)
    {
        if(str1[i]>='0'&&str1[i]<='9') str2+=str1[i];
        else 
        {
            if(str2.size()>str3.size())
            {
                str3=str2;
            }
            else
            {
                str2.clear();
            }
        }
    }
    cout<<str3;
    return 0;
}
