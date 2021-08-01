//Checking whether a number is prime or not

const int limit = 100000007;
vector<bool>isPrime(limit + 1, 1);

bool Prime(int n){
isPrime[1] = 0;
for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = 0;
        }
    }
    if(isPrime[n]==true)
    return true;
    else return false;
}
