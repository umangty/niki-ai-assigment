# niki-ai-assigment

## Problem : 
Given n, find number of bit-strings of length n which have no consecutive 2 zeros.

##Solution :
For n=0, ans=0
n=1, ans=2
n=2, ans=3
n=3, ans=5
n=4, ans=8
n=5, ans=13 ... and so on.
Observing the pattern, we see that answer follows Fibonacci series. Trick here is to calculate these numbers in O(log n) since n can go as large as 10^15.
See the solution to know more.