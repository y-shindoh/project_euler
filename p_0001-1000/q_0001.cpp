/* -*- coding: utf-8; tab-width: 4 -*- */
/**
 * @file	q_0001.cpp
 * @brief	Project Euler (Problem 1)
 * @author	Yasutaka SHINDOH / 新堂 安孝
 * @note	see https://projecteuler.net/ .
 * @note	see http://odz.sakura.ne.jp/projecteuler/index.php?Project%20Euler .
 */

/*
  問題:
  10未満の自然数のうち,
  3 もしくは 5 の倍数になっているものは 3, 5, 6, 9 の4つがあり,
  これらの合計は 23 になる.

  同じようにして, 1000 未満の 3 か 5 の倍数になっている数字の合計を求めよ.
 */

#include <cstdio>

template<typename TYPE>
TYPE
calculate(const TYPE& n)
{
	TYPE c(0);

	for (TYPE i(1); i < n; ++i) {
		if (i % 3 == 0 || i % 5 == 0) c += i;
	}

	return c;
}

#define	N	1000

int
main()
{
	std::printf("%lu\n", calculate<size_t>(N));

	return 0;
}
