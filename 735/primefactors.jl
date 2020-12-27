module Divisors

function isPrime(x)
    if x == 1
        return false
    elseif x < 4
        return true
    elseif x%2 == 0
        return false
    elseif x < 9
        return true
    elseif x%3 == 0
        return false
    else
        r = floor(sqrt(x))
        f = 5
        while f <= r
            if x%f == 0 || x%(f+2) == 0
                return false
            end
            f = f + 6
        end
        return true
    end
end
function primefactors(x)
    i = 2
    primes = zeros(Int64,x)
    while !isPrime(x) && i < sqrt(x^2)/2
        if x%i == 0 && isPrime(i)
            primes[i] = primes[i] + 1
            x = x/i
            println("i: ", i)
        else
            i = i + 1
        end
        #println(primes)
        println("x: ", x, isPrime(x))
    end
    primes[Int(x)] = primes[Int(x)] + 1
    println(primes)
    divisors = 1
    i = 2
    while i < length(primes)
        divisors = divisors*(primes[i]+1)
        #println("*", primes[i]+1)
        #println(divisors)
        i = i + 1
    end
    return divisors
end

println(primefactors(2*15^2))
end
