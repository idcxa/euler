function multiples(x,y,z)
    if x % y == 0 || x % z == 0
        return true
    end
end

function sum(x)
    sum = 0
    for i = 1:x-1
        if multiples(i,3,5) == true
            sum = sum + i
        end
    end
    return sum
end

println(sum(1000))
