//数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        if(numbers.empty()) return 0;
//遍历每个元素，并记录次数；若与前一个元素相同，则次数加1，否则次数减1
        int result=numbers[0];
        int times=1;// 次数
        for(int i=1;i<numbers.size();i++)
        {
            if(times==0)
            {// 更新result的值为当前元素，并置次数为1
                result=numbers[i];
                times++; // 相同则加1
            }
            else if(numbers[i]!=result) times--; // 不同则减1
            else if(numbers[i]==result) times++;
        }
// 判断result是否符合条件，即出现次数大于数组长度的一半
        times=0;
        for(int i=0;i<numbers.size();i++)
        {
            if(numbers[i]==result) times++;
        }
        return times>numbers.size()/2?result:0;
    }
};