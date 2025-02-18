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

/*----------------------------------struct----------------------------------*/

struct Node
{
	string father;
	int rank;

	Node()
	{}
	Node(string x) : father(x), rank(1)
	{}
};

struct DisjointSet
{
	map<string, Node> nodes;

	void Init(string s)
	{
		nodes[s].father = s;
		nodes[s].rank = 1;
	}

	string FindSet(string s)
	{
		return nodes[s].father == s ? s : nodes[s].father = FindSet(nodes[s].father);
	}

	void Merge(string s1, string s2)
	{
		string set1 = FindSet(s1);
		string set2 = FindSet(s2);
		if (nodes[set1].rank < nodes[set2].rank)
			nodes[set1].father = set2;
		else
			nodes[set2].father = set1;
		if (nodes[set1].rank == nodes[set2].rank)
			++nodes[set1].rank;
	}

	bool IsSameSet(string s1, string s2)
	{
		return FindSet(s1) == FindSet(s2);
	}
};

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
	// cin >> t;
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
	int n, m;
	cin >> n >> m;
	DisjointSet ds;
	while (n--)
	{
		string s;
		cin >> s;
		ds.Init(s);
	}
	while (m--)
	{
		int opt;
		string x, y;
		cin >> opt >> x >> y;
		if (opt == 1)
			ds.Merge(x, y);
		else
			cout << ds.IsSameSet(x, y) << endl;;
	}
}