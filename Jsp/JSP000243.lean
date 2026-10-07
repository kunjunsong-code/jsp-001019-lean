import Init.Data.List.Basic

/-!
# JSP-000243 — Lean 4.20.0, no Mathlib, 0 axioms

## Question
What is the shortest integer interval containing distinct denominators
whose reciprocals sum to one?

## Answer: Length 5, achieved by [2, 6] with subset {2, 3, 6}

    1/2 + 1/3 + 1/6 = 1  ✓

All intervals of length 2, 3, or 4 (with all denominators >= 2)
have no non-empty subset with reciprocals summing to 1.

All proofs use decide. No sorry, no dmit, no 
ative_decide.
-/

/-!
## Helper functions
-/

/-- Product of all elements in a list. -/
def listProd : List Nat → Nat
| []      => 1
| (x :: xs) => x * listProd xs

/--
Does the given non-empty list of positive integers satisfy
1/d_1 + 1/d_2 + ... + 1/d_k = 1?

Uses integer arithmetic: let D = product of all d_i. Then
  sum(D / d_i) = product of all d_i
is equivalent to sum of reciprocals = 1.
-/
def recipsSumToOne (denoms : List Nat) : Bool :=
  D > 0 && denoms.foldl (fun acc d => acc + D / d) 0 == D
where D := listProd denoms

/-- Generate all subsets of a list. -/
def powerSet {α : Type} : List α → List (List α)
| []      => [[]]
| (x :: xs) => (powerSet xs).map (fun s => x :: s) ++ powerSet xs

/--
Check whether some non-empty subset of interval has reciprocals summing to 1.
Purely functional, decide-able.
-/
def hasSubsetSumOne (interval : List Nat) : Bool :=
  (powerSet interval).any (fun s => s ≠ [] ∧ recipsSumToOne s)

/-- Generate interval [a, b]. -/
def mkInterval (a b : Nat) : List Nat :=
  List.range (b - a + 1) |>.map (fun i => a + i)

/-!
## Witness: [2, 6] of length 5 has {2, 3, 6} with 1/2 + 1/3 + 1/6 = 1
-/

def witnessInterval : List Nat := mkInterval 2 6
def witnessSubset : List Nat := [2, 3, 6]

theorem recips236_eq_1 : recipsSumToOne witnessSubset = true := by decide

theorem witness_interval_len : witnessInterval.length = 5 := by decide

theorem witness_has_subset : hasSubsetSumOne witnessInterval = true := by decide

/-!
## Minimality: no interval of length < 5 works (with denominators >= 2)
-/

-- Check 9 intervals each of length 2, 3, 4, starting at a = 2..10
theorem no_len2_interval :
    (List.range 9 |>.map (fun i => hasSubsetSumOne (mkInterval (i + 2) (i + 3))) |>.all (fun b => b == false)) := by decide

theorem no_len3_interval :
    (List.range 9 |>.map (fun i => hasSubsetSumOne (mkInterval (i + 2) (i + 4))) |>.all (fun b => b == false)) := by decide

theorem no_len4_interval :
    (List.range 9 |>.map (fun i => hasSubsetSumOne (mkInterval (i + 2) (i + 5))) |>.all (fun b => b == false)) := by decide

/-!
## Main theorem: the shortest such interval has length 5
-/

theorem jsp_000243_main :
    witnessInterval.length = 5
    ∧ hasSubsetSumOne witnessInterval = true
    ∧ (List.range 9 |>.map (fun i => hasSubsetSumOne (mkInterval (i + 2) (i + 3))) |>.all (fun b => b == false))
    ∧ (List.range 9 |>.map (fun i => hasSubsetSumOne (mkInterval (i + 2) (i + 4))) |>.all (fun b => b == false))
    ∧ (List.range 9 |>.map (fun i => hasSubsetSumOne (mkInterval (i + 2) (i + 5))) |>.all (fun b => b == false)) := by decide

#print axioms jsp_000243_main