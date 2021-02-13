
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

function index(x)
    index = 1
    i = 1
    while index != x
        if isPrime(i)
            index += 1
            #println(index, ", ", i)
        end
        i += 2
    end
    return i - 2
end

println(index(10001))

