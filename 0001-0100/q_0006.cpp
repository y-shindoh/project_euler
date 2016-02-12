/* -*- coding: utf-8; tab-width: 4 -*- */
/**
 * @file	q_0006.cpp
 * @brief	Project Euler (Problem 6)
 * @author	Yasutaka SHINDOH / 新堂 安孝
 * @note	see https://projecteuler.net/ .
 * @note	see http://odz.sakura.ne.jp/projecteuler/index.php?Project%20Euler .
 */

/*
  問題:
  最初の10個の自然数について, その二乗の和は,
  12 + 22 + ... + 102 = 385
  最初の10個の自然数について, その和の二乗は,
  (1 + 2 + ... + 10)2 = 3025
  これらの数の差は 3025 - 385 = 2640 となる.

  同様にして, 最初の100個の自然数について二乗の和と和の二乗の差を求めよ.
 */

#include <cstdio>

//#define	N	10
#define	N	100

int
main()
{
	size_t m(0);
	size_t n(0);

	for (size_t i(0); i <= (size_t)N; ++i) {
		m += i * i;
		n += i;
	}

	std::printf("%lu\n", n * n - m);

	return 0;
}
