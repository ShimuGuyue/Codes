	//  $$$$$$\  $$\   $$\     $$\  $$$$$$\  $$$$$$\  $$$$$$\  
	// $$  __$$\ $$ |  \$$\   $$  |$$  __$$\ \_$$  _|$$  __$$\ 
	// $$ /  $$ |$$ |   \$$\ $$  / $$ /  \__|  $$ |  $$ /  $$ |
	// $$$$$$$$ |$$ |    \$$$$  /  \$$$$$$\    $$ |  $$$$$$$$ |
	// $$  __$$ |$$ |     \$$  /    \____$$\   $$ |  $$  __$$ |
	// $$ |  $$ |$$ |      $$ |    $$\   $$ |  $$ |  $$ |  $$ |
	// $$ |  $$ |$$$$$$$$\ $$ |    \$$$$$$  |$$$$$$\ $$ |  $$ |
	// \__|  \__|\________|\__|     \______/ \______|\__|  \__|
	// 您是否赞同纯美女神爱莉希雅的美貌盖世无双？【愛門】!
	#include <iostream>
	#include <iomanip>
	#include <cstdint>
	#include <climits>
	#include <cmath>
	#include <string>
	#include <vector>
	#include <deque>
	#include <queue>
	#include <stack>
	#include <set>
	#include <map>
	#include <bitset>
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
	using std::stoi;
	using std::vector;
	using std::deque;
	using std::queue;
	using std::stack;
	using std::priority_queue;
	using std::set;
	using std::map;
	using std::bitset;
	using std::lower_bound;
	using std::upper_bound;
	using std::sort;
	using std::max_element;
	using std::min_element;

	template <typename T>
	std::istream& operator>>(std::istream &in, vector<T> &v)
	{
		for (T &t : v) in >> t;
		return in;
	}
	template <typename T>
	std::ostream& operator<<(std::ostream &out, vector<T> &v)
	{
		for (T &t : v) out << t << " ";
		return out;
	}

	/*----------------------------------struct----------------------------------*/

	/*-----------------------------------head-----------------------------------*/

	void Solve(void);

	/*-----------------------------------main-----------------------------------*/

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
		cin >> t;
		while (t--)
		{ 
			Solve();
			// cout << "-------------------------" << endl;
		}
		return 0;
	}

	/*-----------------------------------body-----------------------------------*/

	void Solve(void)
	{
		int n, x;
		cin >> n >> x;
		bitset<30> bx(x);
		int flag0 = x;
		for (int i = 0; i < 30; ++i)
		{
			if (bx[i] == 0)
			{
				flag0 = (1 << i) - 1;
				break;
			}
		}
		// cout << flag0 << endl;
		vector<int> as;
		for (int i = 0; i <= flag0 && i < n; ++i)
		{
			as.push_back(i);
		}
		int flag = 0;
		for (int a : as)
		{
			flag |= a;
		}
		if (as.size() == n && flag != x)
		{
			as.back() = x;
		}
		for (int i = as.size(); i < n; ++i)
		{
			as.push_back(x);
		}
		cout << as << endl;
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << bs[i].to_ullong() << " ";
		// }
		// cout << endl;

		// int ans = 0;
		// for (int i = 0; i < n; ++i)
		// {
		// 	ans |= bs[i].to_ullong();
		// }
		// cout << ans <<endl;
	}