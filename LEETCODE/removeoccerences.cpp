#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = part.length();
        string temp;
        for(int i=0;i<s.length();i++){
            if(s.compare(i,n,part)==0){
                i += n-1;
            }
            else{
                temp += s[i];
            }
        }
        return temp;
    }
};
int main(){
    Solution obj;
    cout << obj.removeOccurrences("daabcbaabcbc","abc");
    return 0;
}