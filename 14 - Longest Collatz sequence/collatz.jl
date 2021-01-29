function collatz(n)
    i = 1
    while n != 1
        i = i + 1
        #print(", ", Int(n))
        if n % 2 == 0
            n = n/2
        else
            n = 3*n + 1
        end
    end
    #println()
    return i
end

function main(x)
    largest = 0
    largesti = 0
    for i = 1:x
        chain = collatz(i)
        println(i, ", ", chain,",",  largest)
        if chain > largest
            largest = chain
            largesti = i
        end
    end
    return largesti
end

println("output: ", main(999999))

