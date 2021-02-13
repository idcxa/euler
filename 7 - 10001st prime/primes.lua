require("math")
local prime
prime = function(x)
  if x == 1 then
    return false
  end
  for i = 2, math.sqrt(x) do
    if x % i == 0 then
      return false
    end
  end
  return true
end
local index
index = function(x)
  local j, i = 0, 1
  while j < x do
    i = i + 1
    if prime(i) == true then
      j = j + 1
    end
  end
  return i
end
return print(index(10001))
