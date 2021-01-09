
function getFactors(x)
    sum = 2
    max = x
    i = 2
    while i < max
        if x % i == 0
            #println("i: ", i)
            max = x/i
            sum = sum + 2
        end
        i -= -1
    end
    return sum
end

function triangle(x)
    index = 1
    triangle = 1
    while true
        #print(triangle, ": ")
        if getFactors(triangle) > x
            return triangle
        end
        index = index + 1
        triangle = triangle + index
    end
    return 0
end
println("output: ", triangle(500))
