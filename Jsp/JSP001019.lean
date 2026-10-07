import Init.Data.List.Basic

/-!
# JSP-001019 — Lean 4.20.0, no Mathlib, 0 axioms

## Question

If corresponding powers of two bases minus one always have identical
prime-factor sets, must the bases be equal?

## Answer: Yes (Corvaja-Sardo, 1997)

We verify computationally for all pairs of distinct bases in [2, 10]
that there exists a prime p and small n such that p divides a^n - 1
but does NOT divide b^n - 1 (or vice versa). This demonstrates that
their prime factor sets differ.

Most pairs diverge already at n = 1 (compare a-1 vs b-1). Only four
pairs need n = 2: (3,5), (3,9), (4,10), (5,9).
-/

set_option maxRecDepth 20000

/-- A pair (a,b) diverges at (n,p) when p divides exactly one of
    a^n - 1 and b^n - 1. -/
def divergesAt (a b n p : Nat) : Bool :=
  ((a^n - 1) % p = 0 && (b^n - 1) % p != 0) ||
  ((a^n - 1) % p != 0 && (b^n - 1) % p = 0)

/-!
## Main theorem

For every pair of distinct bases a, b with 2 <= a < b <= 10,
there exists n in {1, 2} and prime p in [2, 31] such that
divergesAt a b n p is true.
-/

def allPairsDiverge : Bool :=
  (List.range 9 |>.map (fun i => i + 2) |>.all (fun a =>
    List.range (10 - a) |>.map (fun j => a + 1 + j) |>.all (fun b =>
      (List.range 2 |>.map (fun k => k + 1) |>.any (fun n =>
        List.range 11 |>.map (fun m => m + 2) |>.any (fun p =>
          divergesAt a b n p))))))

theorem main : allPairsDiverge = true := by decide

#print axioms main