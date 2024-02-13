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

For example, running with `i = 1` shows how `g` (and `f`) behaves for an arbitrary number `N = 4n + 1`.
Running (with `make`) shows `f(4n + 1) ≤ f(12n + 4) ≤ f(6n + 2) ≤ f(3n + 1)`, and ends with `@Y` ('Yes') to indicate that all numbers `f(4n + 1) = 1` under the assumption that `f(n) = 1` for `n < N`. With `4n + 3` on the other hand, the search ends in `@-` since `9n + 8` cannot be expanded further since it is unclear whether it is even or odd. That's when trying out "more specialized" versions of `4n + 3` (i.e. `8n + 3` and `8n + 7`) is useful.
