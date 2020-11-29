#include <iostream> 
#include <string> 
#include <algorithm>
using namespace std;
//将一句话的单词进行倒置，标点不倒置。比如 I like beijing. 经过函数后变为：beijing. like I
//依次输出倒置之后的字符串,以空格分割
int main()
{
    string s;
//// 注意这里要使用getline，cin>>s遇到空格就结束
    getline(cin,s);
//// 翻转整个句子
    reverse(s.begin(),s.end());
// 翻转单词
    auto start=s.begin();
    while(start!=s.end())
    {
        auto end=start;
        while(end!=s.end()&&*end!=' ')
        {
            end++;
        }
        reverse(start,end);
        if(end!=s.end()) start=end+1;
        else start=end;
    }
    cout<<s<<endl;
    return 0;
}