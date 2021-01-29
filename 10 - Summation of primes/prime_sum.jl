using Base

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

function simplePrime(x)
    for i = 2:sqrt(x)
        if x % i == 0
            return false
        end
    end
    return true
end

function summation(x)
    sum = 0
    for i = 2:x
        if Base.isprime(i)
            sum = sum + i
            #println(i)
        end
    end
    return sum
end

println("sum = ", summation(2000000))

