module Triangular

function getFactors(x)
    sum = 2

    for i = 2:x/2
        if x%i == 0
            #print(i, ", ")
            sum = sum + 1
        end
    end
    print(sum, "\n")
    return sum
end

function triangle(x)
    index = 1
    triangle = 1
    while true
        #println(triangle, ": ")
        if getFactors(triangle) > x
            return triangle
        end
        index = index + 1
        triangle = triangle + index
    end
    return 0
end
println("output: ", triangle(500))
end
