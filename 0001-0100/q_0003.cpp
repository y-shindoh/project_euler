/* -*- coding: utf-8; tab-width: 4 -*- */
/**
 * @file	q_0003.cpp
 * @brief	Project Euler (Problem 3)
 * @author	Yasutaka SHINDOH / 新堂 安孝
 * @note	see https://projecteuler.net/ .
 * @note	see http://odz.sakura.ne.jp/projecteuler/index.php?Project%20Euler .
 */

/*
  問題:
  13195 の素因数は 5, 7, 13, 29 である.

  600851475143 の素因数のうち最大のものを求めよ.
 */

#include <cstdio>
#include <vector>

template<typename TYPE>
TYPE
calculate(TYPE n)
{
	std::vector<TYPE> p;

	if (n % 2 == 0) {
		p.push_back(2);
		while (n % 2 == 0) n /= 2;
	}

	for (TYPE i(3); i * i <= n; i += 2) {
		bool f(false);
		for (auto j : p) {
			if (i % j != 0) continue;
			f = true;
			break;
		}
		if (f) continue;
		p.push_back(i);
		while (n % i == 0) n /= i;
	}

	if (1 < n) p.push_back(n);

	return p.back();
}

#define	N	((size_t)600851475143)	// 6857
//#define	N	((size_t)13195)	// 29

int
main()
{
	std::printf("%lu\n", calculate<size_t>(N));

	return 0;
}
