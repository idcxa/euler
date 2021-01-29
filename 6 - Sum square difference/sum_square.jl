function sum_square_difference(x)
    sum_squares = 0
    sum         = 0
    for i = 1:x
        sum_squares = sum_squares + i^2
        sum = sum + i
    end
    return sum^2 - sum_squares
end

println(sum_square_difference(100))
