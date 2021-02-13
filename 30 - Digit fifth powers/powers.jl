using plots

function powersum(x, n)
    sum = 0
    if x >= 10
        sum = powersum(floor(BigInt(x) / 10), 5)
    end
    digit  = Int(floor(x % 10))
    sum = digit^n + sum
    #println(sum)
    return sum
end

function sum(n)
    sum = 0
    i = 1
    while true
        i += 1
        if powersum(i, n) == i
        end
        println(i, ", ", powersum(i, n))
    end
    return sum
end

println("threads = ",  Threads.nthreads())

x = 1:10; y = rand(10); # These are the plotting data
plot(x, y)
sum(5)
