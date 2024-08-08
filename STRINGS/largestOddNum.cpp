#include<iostream>
using namespace std;
class Solution
{
public:
    string largestOddNumber(string num)
    {
        int n = num.length();
        for (int i = n - 1; i >= 0; i--)
        {
            if ((num[i] - '0') % 2 != 0)
            {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};
int main(){
    string str = "52";
    Solution obj;
    string ans = obj.largestOddNumber(str);
    cout << ans;
    return 0;
}