/* -*- coding: utf-8; tab-width: 4 -*- */
/**
 * @file	q_0004.cpp
 * @brief	Project Euler (Problem 4)
 * @author	Yasutaka SHINDOH / 新堂 安孝
 * @note	see https://projecteuler.net/ .
 * @note	see http://odz.sakura.ne.jp/projecteuler/index.php?Project%20Euler .
 */

/*
  問題:
  左右どちらから読んでも同じ値になる数を回文数という.
  2桁の数の積で表される回文数のうち, 最大のものは 9009 = 91 × 99 である.

  では, 3桁の数の積で表される回文数の最大値を求めよ.
 */

#include <cstdio>
#include <algorithm>

template<typename TYPE>
TYPE
calculate(char* s,
		  TYPE n)
{
	int i(0);
	int j(0);

	do {
		s[i++] = n % 10;
		n /= 10;
	} while (n > 0);

	--i;
	while (j < i) {
		if (s[j++] != s[i--]) return false;
	}

	return true;
}

int
main()
{
	char s[1024];
	size_t m(0);

	for (size_t i(999); 0 < i; --i) {
		for (size_t j(i); 0 < j; --j) {
			if (!calculate<size_t>(s, i * j)) continue;
			m = std::max(m, i * j);
		}
	}

	std::printf("%lu\n", m);

	return 0;
}
