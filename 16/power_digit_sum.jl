function digits(x)
    sum = 0
    #println(typeof(x))
    #println(x)
    if x >= 10
        sum = digits(floor(BigInt(x) / 10))
    end

    digit  = Int(floor(x % 10))
    sum = digit + sum
    print(digit)
    #println("sum = ", sum)
    return sum
end

println("OUTPUT = ", digits(BigInt(2)^1000))
println(BigInt(2)^1000)

