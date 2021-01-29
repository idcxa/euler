
# The prime factors of 13195 are 5, 7, 13 and 29.

# What is the largest prime factor of the number 600851475143 ?

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

function largest(x)
    largest = 0
    for i = 1:sqrt(x)
        if x % i == 0 && isPrime(i)
            println(i)
            largest = i
        end
    end
    return largest
end

println("largest = ", largest(600851475143))
