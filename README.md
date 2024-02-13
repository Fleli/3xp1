# 3x+1

## Definitions

Let `n` be a natural number.

Let `g(n) = (3n + 1) if (n is odd) else (n / 2)`

Let `f(n) = min { n, g(n), g(g(n)), ... }`

## Conjecture

The Collatz conjecture is equivalent to `f(n) = 1` holding for all `n`.

## Induction

This script is just written to give some insight into the use of induction when working with this problem.

By `f`'s definition, we see that `f(N) = min { N, g(H), g(g(N)), ... } = min { N, f(g(N)) }`. Therefore, `f(N) ≤ f(g(N))`.

By the lemma above, `f(N) ≤ f(g(N)) ≤ f(g(g(N))) ≤ ...`, so if any of `f(g(N)), f(g(g(N))), ...` equals 1, then so does `f(N)`. Therefore, if we can show that `g(N) < N  or  g(g(N)) < N  or  ...`, then `f(N) = 1` under the induction hypothesis that `f(n) = 1` for `n < N`.

## This script

This script is a small tool to check the expansions of various kinds of numbers.
