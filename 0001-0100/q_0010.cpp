/* -*- coding: utf-8; tab-width: 4 -*- */
/**
 * @file	q_0010.cpp
 * @brief	Project Euler (Problem 10)
 * @author	Yasutaka SHINDOH / 新堂 安孝
 * @note	see https://projecteuler.net/ .
 * @note	see http://odz.sakura.ne.jp/projecteuler/index.php?Project%20Euler .
 */

/*
  問題:
  10以下の素数の和は 2 + 3 + 5 + 7 = 17 である.

  200万以下の全ての素数の和を求めよ.
 */

#include <cstdio>
#include <vector>

//#define	N	10
#define	N	2000000

int
main()
{
	std::vector<size_t> v;
	size_t t(0);

	if (2 <= N) v.push_back(2);

	for (size_t i(3); i <= (size_t)N; ++i) {
		bool f(true);
		for (auto j : v) {
			if (i < j * j) break;
			if (i % j != 0) continue;
			f = false;
			break;
		}
		if (f) v.push_back(i);
	}


	for (auto j : v) t += j;
	std::printf("%lu\n", t);

	return 0;
}
