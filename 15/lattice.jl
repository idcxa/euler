
#https://projecteuler.net/problem=15

#Starting in the top left corner of a 2×2 grid,
#and only being able to move to the right and down,
#there are exactly 6 routes to the bottom right corner.

#How many such routes are there through a 20×20 grid?

function lattice(y,x)
    if y == 1
        return y+x
    elseif y == x
        return lattice(y-1,x)*2
    else
        return lattice(y,x-1) + lattice(y-1,x)
    end
end

println(lattice(6,6))
