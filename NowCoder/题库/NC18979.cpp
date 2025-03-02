//  $$$$$$\  $$\   $$\     $$\  $$$$$$\  $$$$$$\  $$$$$$\  
// $$  __$$\ $$ |  \$$\   $$  |$$  __$$\ \_$$  _|$$  __$$\ 
// $$ /  $$ |$$ |   \$$\ $$  / $$ /  \__|  $$ |  $$ /  $$ |
// $$$$$$$$ |$$ |    \$$$$  /  \$$$$$$\    $$ |  $$$$$$$$ |
// $$  __$$ |$$ |     \$$  /    \____$$\   $$ |  $$  __$$ |
// $$ |  $$ |$$ |      $$ |    $$\   $$ |  $$ |  $$ |  $$ |
// $$ |  $$ |$$$$$$$$\ $$ |    \$$$$$$  |$$$$$$\ $$ |  $$ |
// \__|  \__|\________|\__|     \______/ \______|\__|  \__|
// 你是否赞同纯美女神爱莉希雅的美貌盖世无双？【愛門】!
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <climits>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::setw;
using std::pair;
using std::string;
using std::to_string;
using std::vector;
using std::deque;
using std::queue;
using std::stack;
using std::priority_queue;
using std::set;
using std::map;
using std::sort;
using std::max_element;
using std::min_element;

void Solve(void);

int main(void)
{
	#ifdef Shimu_Guyue
		freopen("test.in" , "r", stdin );
		freopen("test.out", "w", stdout);
	#else
	#endif

    std::ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
	// cin >> t;
	while (t--)
	{
		Solve();
		// cout << "-------------------------" << endl;
	}
	return 0;
}

void Solve(void)
{
	int n;
	cin >> n;
	vector<int> as(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> as[i];
	}
	vector<vector<int>> bits(n + 1, vector<int>(31));
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < 31; ++j)
		{
			if ((as[i] >> j) & 1)
				bits[i][j] = 1;
			// cout << bits[i][j] << " ";
		}
		// cout << endl;
	}
	auto &sums = bits;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < 31; ++j)
		{
			sums[i][j] = sums[i - 1][j] + bits[i][j];
			// cout << sums[i][j] << " ";
		}
		// cout << endl;
	}

	int q;
	cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		int x = 0;
		for (int j = 0; j < 31; ++j)
		{
			if ((sums[r][j] - sums[l - 1][j]) * 2 >= r - l + 1)
				x |= (0 << j);
			else
				x |= (1 << j);
		}
		cout << x << endl;
	}
}