#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class sieveErastosthenes {
    public:
    void sieve(int n, vector<int> &primes){
        vector<bool> prime(n+1,true);
        // prime[0] = prime[1] = false;
        for(int i=2;i<=n;i++){
            if(prime[i]==true){
                for(int j=2*i;j<n;j+=i){
                    prime[j] = false;
                }
            }
        }
        for(int i=2;i<=n;i++){
            if(prime[i]){
                primes.push_back(i);
            }
        }
    }
    void segmented_sieve(int l, int h){
        int sq = floor(sqrt(h));
        vector<int> primes;
        primes.reserve(sq);
        sieve(sq,primes);
        vector<bool> isPrime(h-l+1,true);
        for(int i:primes){
            int sm =(l/i)*i;
            if(sm<l){
                sm += i;
            }
            for(int j=sm;j<=h;j+=i){
                isPrime[j-l] = false;
            }
        }
        for(int i=l;i<=h;i++){
            if(isPrime[i-l]){
                cout << i << " ";
            }
        }
    }
};
int main(){
    sieveErastosthenes obj;
    obj.segmented_sieve(100,200);
    return 0;
}