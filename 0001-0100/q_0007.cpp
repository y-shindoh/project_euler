/* -*- coding: utf-8; tab-width: 4 -*- */
/**
 * @file	q_0007.cpp
 * @brief	Project Euler (Problem 7)
 * @author	Yasutaka SHINDOH / 新堂 安孝
 * @note	see https://projecteuler.net/ .
 * @note	see http://odz.sakura.ne.jp/projecteuler/index.php?Project%20Euler .
 */

/*
  問題:
  素数を小さい方から6つ並べると 2, 3, 5, 7, 11, 13 であり, 6番目の素数は 13 である.

  10 001 番目の素数を求めよ.
 */

#include <cstdio>
#include <vector>

//#define	N	6
#define	N	10001

int
main()
{
	std::vector<size_t> v;
	v.push_back(2);

	for (size_t i(3); v.size() < N; ++i) {
		bool f(true);
		for (auto j : v) {
			if (i < j * j) break;
			if (i % j != 0) continue;
			f = false;
			break;
		}
		if (f) v.push_back(i);
	}

	std::printf("%lu\n", v[N-1]);

	return 0;
}
