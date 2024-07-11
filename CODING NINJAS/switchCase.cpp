#include<iostream>
#include<vector>
using namespace std;
double areaSwitchCase(int ch, vector<double> a) {
	double ans=0;
	switch(ch){
		case 1:
		ans = (22.0/7)*a[0]*a[0];
		break;
		case 2:
		ans = a[0]*a[1];
	}
	return ans;
}
int main(){
    vector<double> a = {3};
    cout << areaSwitchCase(1,a);
    return 0;
}