
#= https://projecteuler.net/problem=48

The series, 11 + 22 + 33 + ... + 1010 = 10405071317.

Find the last ten digits of the series, 11 + 22 + 33 + ... + 10001000.

=#

function self_power(x)
    n = x
    for i = 1:x-1
        x = BigInt(x * n)
    end
    #println(x)
    return x
end

function sum(x)
    sum = BigInt(0)
    for i = 1:x
        sum = sum + self_power(i)
        #println(sum)
    end
    return sum
end

println(sum(1000))

