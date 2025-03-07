#include <iostream>
#include <vector>

int n;
std::vector<std::string> words;
std::vector<int> flags;
int ans;

void Dfs(std::string s);
void Solve(void);

int main(void)
{
	#ifdef Shimu_Guyue
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
    // int n;
    std::cin >> n;
    // std::vector<std::string> words(n);
    words = std::vector<std::string>(n);
    for (int i(0); i < n; ++i)
    {
        std::cin >> words[i];
    }
    std::string c;
    std::cin >> c;
    // std::vector<int> flags(n, 2);
    flags = std::vector<int>(n, 2);

    // int ans(0);
    ans = 0;
    Dfs(c);
    std::cout << ans << std::endl;
}

void Dfs(std::string s)
{
    ans = std::max(ans, (int)s.size());

    for (int i(0); i < n; ++i)
    {
        if (!flags[i])
            continue;
        int len(std::min(s.size(), words[i].size()));
        for (int j(1); j <= len; ++j)
        {
            std::string tail(s.end() - j, s.end());
            std::string head(words[i].begin(), words[i].begin() + j);
            if (tail == head)
            {
                --flags[i];
                Dfs(s + std::string(words[i].begin() + j, words[i].end()));
                ++flags[i];
                continue;
            }
        }
    }
}