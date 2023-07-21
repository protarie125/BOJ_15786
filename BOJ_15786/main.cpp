#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n, m;
string key;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n >> m >> key;
	while (0 < (m--)) {
		string s;
		cin >> s;

		auto j = 0;
		auto ans = bool{ true };
		for (auto i = 0; i < n; ++i) {
			auto isFound = bool{ false };
			for (auto x = j; x < s.length(); ++x) {
				if (key[i] == s[x]) {
					j = x + 1;
					isFound = true;
					break;
				}
			}

			if (!isFound) {
				ans = false;
			}
		}

		cout << (ans ? "true" : "false") << '\n';
	}

	return 0;
}