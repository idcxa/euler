require "fun" ()

local sum = 0
local function summation(x)
    sum = sum + x
end

each(summation, filter(function(x) return x % 3 == 0 or x % 5 == 0 end, range(1000)))
print(sum)

