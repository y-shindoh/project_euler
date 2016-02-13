/* -*- coding: utf-8; tab-width: 4 -*- */
/**
 * @file	q_0009.cpp
 * @brief	Project Euler (Problem 9)
 * @author	Yasutaka SHINDOH / 新堂 安孝
 * @note	see https://projecteuler.net/ .
 * @note	see http://odz.sakura.ne.jp/projecteuler/index.php?Project%20Euler .
 */

/*
  問題:
  ピタゴラス数(ピタゴラスの定理を満たす自然数)とは a < b < c で以下の式を満たす数の組である.
  a2 + b2 = c2
  例えば, 32 + 42 = 9 + 16 = 25 = 52 である.

  a + b + c = 1000 となるピタゴラスの三つ組が一つだけ存在する.
  これらの積 abc を計算しなさい.
 */

#include <cstdio>

int
main()
{
	for (size_t a(1); a < 1000; ++a) {
		for (size_t b(a+1); b < 1000; ++b) {
			size_t c = 1000 - a - b;
			if (a * b + 1000 * c != 500000) continue;
			std::printf("%lu\n", a * b * c);
			return 0;
		}
	}

	return 0;
}
