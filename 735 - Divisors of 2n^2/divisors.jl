module Divisors

function divisors(x)
    println("x =", x)
    sum = 1
    r = sqrt(x)/2
    n = 2x^2
    for i = 2:x
        if n%i == 0
            #print(i, ", ")
            sum = sum + 1
        end
    end
    #println(sum)
    return sum
end

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
    primes = []
    while true
        if x%i && isPrime(i)
            x = x / i
            primes[i] = primes[i] + 1
        elseif isPrime(x)
            return
        end
    i++

function twon2(x)
    sum = 0
    for i = 1:x
        #sum = sum + divisors(i)
        #println(i)
    end
    println(sum)
    #n = divisors(x)
    sum = divisors(2 * x*(x+1)*(2x+1)*1/6)
    #return sum
end
primeFactors(48)
#println(twon2(15))
#println(twon2(1000))
#println(divisors(15))

end
end
end
