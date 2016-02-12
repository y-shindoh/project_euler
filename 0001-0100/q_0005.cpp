/* -*- coding: utf-8; tab-width: 4 -*- */
/**
 * @file	q_0005.cpp
 * @brief	Project Euler (Problem 5)
 * @author	Yasutaka SHINDOH / 新堂 安孝
 * @note	see https://projecteuler.net/ .
 * @note	see http://odz.sakura.ne.jp/projecteuler/index.php?Project%20Euler .
 */

/*
  問題:
  2520 は 1 から 10 の数字の全ての整数で割り切れる数字であり,
  そのような数字の中では最小の値である.

  では, 1 から 20 までの整数全てで割り切れる数字の中で最小の正の数はいくらになるか.
 */

#include <cstdio>
#include <utility>

template<typename TYPE>
TYPE
gcd(TYPE a,
	TYPE b)
{
	if (a < b) std::swap(a, b);

	while (b > 0) {
		a %= b;
		std::swap(a, b);
	}

	return a;
}

//#define	N	10
#define	N	20

int
main()
{
	size_t n(1);

	for (size_t i(2); i <= (size_t)N; ++i) {
		n *= i / gcd(i, n);
	}

	std::printf("%lu\n", n);

	return 0;
}
