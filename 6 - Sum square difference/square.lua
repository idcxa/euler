local sum_square
sum_square = function(x)
  local sum = 0
  for i = 1, 10 do
    sum = sum + (i ^ 2)
  end
  return sum
end
local square_sum
square_sum = function(x)
  local sum = 0
  for i = 1, 10 do
    sum = sum + i
  end
  return sum ^ 2
end
return print(square_sum(100) - sum_square(100))
