#include<iostream> 
#include<cmath>
using namespace std;
string decToBin(long long n){
	string bin = "";
	while(n>0){
		int digit = n&1;
		bin += to_string(digit);
		n = n>>1;
	}
	return bin;
}
bool palindrome(string s, int i, int j){
	if(i>j){
		return true;
	}
	if(s[i]!=s[j]){
		return false;
	}
	else{
		return palindrome(s, i+1, j-1);
	}
}
bool checkPalindrome(long long N)
{
	string ans = decToBin(N);
	int n = ans.length();
	return palindrome(ans,0,n-1);
}
int main(){
    long long n;
    cin >> n;
    cout << checkPalindrome(n);
    return 0;
}