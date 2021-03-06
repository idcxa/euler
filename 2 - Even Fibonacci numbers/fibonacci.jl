function fibonacci(a,b,m)
    sum = 0
    if a % 2 == 0
        sum = sum + a
    end
    if a > m || b > m
        return sum
    end
    sum = sum + fibonacci(b,a+b,m)
    return sum
end

println("OUTPUT = ", fibonacci(1,2,4000000))

