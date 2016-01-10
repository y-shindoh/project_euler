/* -*- coding: utf-8; tab-width: 4 -*- */
/**
 * @file	q_0002.cpp
 * @brief	Project Euler (Problem 2)
 * @author	Yasutaka SHINDOH / 新堂 安孝
 * @note	see https://projecteuler.net/ .
 * @note	see http://odz.sakura.ne.jp/projecteuler/index.php?Project%20Euler .
 */

/*
  問題:
  フィボナッチ数列の項は前の2つの項の和である.
  最初の2項を 1, 2 とすれば, 最初の10項は以下の通りである.

  1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
  数列の項の値が400万以下の, 偶数値の項の総和を求めよ.

  Note:
  この問題は最近更新されました.
  お使いのパラメータが正しいかどうか確認してください.
*/

#include <cstdio>
#include <utility>

template<typename TYPE>
TYPE
solution(const TYPE& n)
{
	TYPE a(1);
	TYPE b(1);
	TYPE c(0);

	for (TYPE i(2); true; ++i) {
		a = b + a;
		std::swap(a, b);
		if (n < b) break;
		if (b % 2 == 0) c += b;
	}

	return c;
}

#define	N	(4 * 1000 * 1000)

int
main()
{
	std::printf("%lu\n", solution<size_t>(N));

	return 0;
}
