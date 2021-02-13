#####################################
# https://projecteuler.net/problem=23

# A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

# A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

# As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

# Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.

#####################################

# Returns true if x is perfect, otherwise returns sum

function getFactors(x)
    max = x
    i = 2
    while i < max
        if x % i == 0
            #println("i: ", i)
            max = x/i
            sum = sum + i
        end
        i -= -1
    end
    return sum
end

function perfect(x)
    sum = 0
    i = 2
    max = x
    while i < max
        if x % i == 0
            max = x/i
            sum = sum + i + x/i
        end
        i += 1
    end
    if sum == x
        return true
    else
        return sum
    end
end

# Find the sum of all positive integers which cannot be written as the sum of two abundant numbers
function sum()
    sum = 0
    # Test all numbers up to 28123
    for i = 19077:-1:1
        done = false
        for j = 1:i
            # j + x = i
            # where j and x are abundant
            # x = i - j
            x = i - j
            if perfect(j) > j && perfect(x) > x
                #println("i: ", i, " j: ", j, " j-i: ", i-j)
                #println("throwaway")
                done = true
                break;
            end
        end
        if done != true
            println(i)
            sum = sum + i
            #println("sum: ", sum)
        end
    end
    return sum
end

function sum2()
    sum = 0
    j = 0
    for i = 1:28123
        done = false
        if perfect(i) > i
            for j = 1:i
                if perfect(j) > i
                    #println(i+j)
                    done = true
                end
            end
        end
        if done == false
            sum = sum + i+j
            println(i+j)
        end
    end
    return sum
end

function abundant(x)
    for i = 1:50
        if perfect(i) > i
            println(i)
        end
    end
end

abundant(100)

#println(sum())

#println(perfect(4725))
