
####################################
# https://projecteuler.net/problem=5

# 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
####################################

function smallest_multiple(x)
    n = 1
    while true
        # increment n until return
        for i = 2:x
            # increment i, 2 to x
            if n % i != 0
                # if n is divisible by any of the numbers 1 to x, break increment n and repeat the while loop
                break
            elseif i == x
                # elseif i reaches the final value for x without being divisible any of the numbers lower than x
                # end the function returning the value for n
                return n
            end
        end
        n += 1
    end
end

println("output = ", smallest_multiple(10))

