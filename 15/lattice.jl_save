function chains(x, y)

    while j <= x -1
        chains = chains + cha

end

function lattice(x, y)

    chains = 0
    chains = 2*(chains + (x+1))

    j = 2
    while j <= x - 1
        chains = chains + 2*(lattice(x-1,j))
        println("lattice(", x-1, ", ", j, "), chains = ", chains)
        j += 1
    end

    if y == 1
        println("y = 1")
        chains = (x+1)
    end

    return chains
end

println(lattice(3,1))
