#one         3
#two         3
#three       5
#four        4
#five        4
#six         3
#seven       5
#eight       5
#nine        4

#ten         3

#eleven      6 (+ 3)
#twelve      6 (+ 3)
#thirteen    8 (+ 3)
#fourteen    8 (+ 4)
#fifteen     7 (+ 3)
#sixteen     7 (+ 4)
#seventeen   9 (+ 4)
#eighteen    8 (+ 3)
#nineteen    8 (+ 4)

#twenty      6 (+3)
#thirty      6 (+1)
#forty       6 (+1)
#fifty       5 (+1)
#sixty       5 (+2)
#seventy     7 (+2)
#eighty      6 (+1)
#ninety      6 (+2)

#hundred     7
#thousand    8


function tens(x)
    if x == 0
        return 0
    elseif x == 8 || x == 4 || x == 5 || x == 3
        print("y(1) ")
        return 1
    elseif x == 6 || x == 7 || x == 9
        print("ty(2) ")
        return 2
    else
        println("ty(3) ")
        return 3
    end

end
function teens(x)
    if x < 4 || x == 5 || x == 8 || x == 0
        print("teen(3) ")
        return 3
    else
        print("teen(4)  ")
        return 4
    end
end

function basics(x)
    if x == 1 || x == 2 || x == 6
        print("one/two/six(3) ")
        return 3
    elseif x == 4 || x == 5 || x == 9
        print("four/five/nine(4) ")
        return 4
    elseif x == 3 || x == 7 || x == 8
        print("three/seven/eight(5) ")
        return 5
    else
        return 0
    end
end

function letters(x)
    sum = 0
    t = Int64(floor(x/1000))
    h = Int64(floor(x/100 - t*10))
    n = Int64(floor(x/10 - t*100 - h*10))
    u = Int64(floor(x  - t*1000 - h*100 - n*10))

    if t != 0
        sum = sum + basics(t) + 8
        print("thousand(7) ")
        if h != 0 || n != 0 || u != 0
            print("and(3) ")
            sum = sum + 3
        end

    end
    if h != 0
        sum = sum + basics(h) + 7
        print("hundred(7) ")
        if n != 0 || u != 0
            print("and(3) ")
            sum = sum + 3
        end
    end
    if n == 1
        sum = sum + basics(u) + teens(u)
    elseif n != 0
        sum = sum + basics(n) + tens(n)
        sum = sum + basics(u)
    else
        sum = sum + basics(u)
    end


    #println(t,", ", h,", ", n,", ", u)
    println("\r")
    return sum
end

function sum(x)
    sum = 0
    for i = 1:x
        n = letters(i)
        println(i, ", ", n)
        print("\n")
        sum = sum + n
    end
    return sum
end

println("OUTPUT = ", sum(1000))
