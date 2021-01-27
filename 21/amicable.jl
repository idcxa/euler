
function d(x)
    sum = 0
    for i = 1:x/2
        if x % i == 0
            sum = sum + i
            #println(i)
        end
    end
    return sum
end

function amicable(x)
    sum = 0
    for i = 1:x
        a = d(i)
        if i == d(a) && i != a
            println(i)
            sum = sum + i
        end
    end
    return sum
end

println("OUTPUT = ", amicable(10000))

#println(d(6))

