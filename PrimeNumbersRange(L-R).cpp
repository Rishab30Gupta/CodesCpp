//GET PRIME NUMBERS BETWEEN L-R
  // 1 <= l <= r <= 1e12
  // 1 <= r-l+1 <= 1e6

vector<int> get_primes(int l, int r) {
    vector<bool>prime(r - l + 1, 1);
    for (int i = 2; i * i <= r; i++) {

        //first multiple of i which is >=l
        int num = ((l + i - 1) / i) * i;
        for (int j = max(i * i, num); j <= r; j += i)
            prime[j - l] = 0;
    }
    vector<int>ans;
    for (int i = 0; i < r - l + 1; i++) {
        if (prime[i] != 0)
            ans.push_back(i + l);
    }
    return ans;
}
