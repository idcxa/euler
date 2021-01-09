function Smallest_Multiple(x)
    local n = 1
    while true do

        for i = 1,x do
            if n % i ~= 0 then
                break
            elseif i == x then
                return n
            end
        end

        n = n + 1
        -- print (i, divisible)
        -- if divisible then print (i, divisible) return end

    end
end

print(Smallest_Multiple(20))
