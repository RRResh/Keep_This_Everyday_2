//题目：删除公共字符
//本题如果使用传统的暴力查找方式，如判断第一个串的字符是否在第二个串中
//再挪动字符删除这个字符的方式，效率为O(N^2)，效率太低，很难让人满意。
//用哈希 将第二个字符串的字符都映射到一个hashtable数组中，用来判断一个字符在这个字符串。
//不要用删除 删除伴随数据挪动效率太低 将不在字符添加到一个新字符串 返回
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
//注意这里不能使用cin接收，因为cin遇到空格就结束了。
    getline(cin,str1);
    getline(cin,str2);
    int hashtable[200]={0};
    for(int i=0;i<str2.size();i++)
    {
        hashtable[str2[i]]++;
    }
// 遍历str1，str1[i]映射hashtable对应位置为0，则表示这个字符在 
// str2中没有出现过，则将他+=到ret。注意这里最好不要str1.erases(i) 
// 因为边遍历，边erase，容易出错。
    string ret;
    for(int i=0;i<str1.size();i++)
    {
        if(hashtable[str1[i]]==0)
        {
            ret+=str1[i];
        }
    }
    cout<<ret<<endl;
    return 0;
}