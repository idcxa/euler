
-- https://projecteuler.net/problem=7

--      By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

--      What is the 10 001st prime number?

require "math"

prime = (x) ->
    if x == 1
        return false
    for i = 2,math.sqrt(x)
        if x%i == 0
            return false
    return true

index = (x) ->
    j, i = 0, 1
    while j < x
        i += 1
        if prime(i) == true
            j += 1
            print j,i
    return i

print index(10000001)

