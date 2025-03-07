﻿#include <iostream>

void Solve(void);

int main(void)
{
	#ifndef ONLINE_JUDGE
	freopen(".in.in"  , "r", stdin );
	freopen(".out.out", "w", stdout);
	#endif

    // 关闭输入输出缓存，使效率提升
    std::ios::sync_with_stdio(false);
    // 解除cin和cout的默认绑定，来降低IO的负担使效率提升
    std::cin.tie(NULL); std::cout.tie(NULL);

    int t(1);
	std::cin >> t;
	while (t--)
	{
		Solve();
		//std::cout << std::endl;
	}
	return 0;
}

void Solve(void)
{
    int a1, a2, b1, b2;
	std::cin >> a1 >> a2 >> b1 >> b2;
	int ans(0);
	if (a1 > b1 && a2 >= b2)
		++ans;
	if (a1 > b2 && a2 >= b1)
		++ans;
	if (a2 > b1 && a1 >= b2)
		++ans;
	if (a2 > b2 && a1 >= b1)
		++ans;
	if (a1 == b1 && a2 > b2)
		++ans;
	if (a1 == b2 && a2 > b1)
		++ans;
	if (a2 == b1 && a1 > b2)
		++ans;
	if (a2 == b2 && a1 > b1)
		++ans;
	std::cout << ans << std::endl;
}