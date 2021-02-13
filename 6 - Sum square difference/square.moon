
-- https://projecteuler.net/problem=6

--      Problem 6    https://projecteuler.net/problem=6
--      The sum of the squares of the first ten natural numbers is,
--                1^2 + 2^2 + ... + 10^2 = 385
--      The square of the sum of the first ten natural numbers is,
--                (1 + 2 + ... + 10)^2 = 55^2 = 3025
--      The difference between the sum of the squares of the first ten natural numbers
--      and the square of the sum is: 3025 - 385 = 2640
--
--      Find the difference between the sum of the squares
--      of the first one hundred natural numbers and the square of the sum.

sum_square = (x) ->
    sum = 0
    for  i = 1,x
        sum += i^2
    return sum

square_sum = (x) ->
    sum = 0
    for i = 1,x
        sum += i
    return sum^2


print square_sum(100) - sum_square(100)
