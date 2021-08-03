//smallest factor of a given number
const int limit = 1000005;
int spf[limit + 1];
void pre() {
	for (int i = 2; i <= 1000; i++) {
		if (spf[i] == 0) {
			spf[i] = i;
			for (int j = i * i; j <= 1000; j += i) {
				if (spf[j] == 0) {
					spf[j] = i;
				}
			}
		}
	}
}
vector < pair<int, int>>get_factors(int x) {
	vector<pii>ans;
	while (x > 1) {
		int p = spf[x], cnt = 0;
		while (x % p == 0) {
			x = x / p;
			cnt++;
		}
		ans.pb({p, cnt});
	}
	return ans;
}
void solve() {
	pre();
	auto ans = get_factors(27);
	for (pii it : ans) {
		cout << it.ff << " " << it.ss << endl;
	}
}
