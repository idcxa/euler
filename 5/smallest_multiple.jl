
function smallest_multiple(x)
    n = 1
    while true
        #println(n)
        for i = 1:x
            #println("i = ", i)
            if n % i != 0
                break
            elseif i == x
                return n
            end
        end
        n += 1
    end
end

println(smallest_multiple(20))

