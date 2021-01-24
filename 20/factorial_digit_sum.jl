function factorial(x)
    factorial = BigInt(1)
    for i = 1:x
        factorial = factorial * i
        #println(factorial)
    end
    return factorial
end

function digit_sum(x)
    sum = 0
    s = string(x)
    for i = 1:lastindex(s)
        #print(s[i])
        sum = sum + Int64(s[i]-48)
        #println("digit = ", s[i], ", sum = ", sum)
    end
    return sum
end

println("OUTPUT = " , digit_sum(factorial(100)))

