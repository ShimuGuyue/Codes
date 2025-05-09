#include <iostream>
#include <map>

void Solve(void);

int main(void)
{
	#ifndef ONLINE_JUDGE
	freopen(".in.in"  , "r", stdin );
	freopen(".out.out", "w", stdout);
	#endif
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);

    int t(1);
	//std::cin >> t;
	while (t--)
	{
		Solve();
		//std::cout << std::endl;
	}
	return 0;
}

void Solve(void)
{
    std::string s;
	std::cin >> s;
	std::map<char, int> counts;
	int max(0);
	for (char c : s)
	{
		++counts[c];
		max = std::max(max, counts[c]);
	}
	int ans(counts.size());
	std::cout << ans << std::endl;
}