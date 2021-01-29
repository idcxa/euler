require"bc"

function factorial (n)
    local sum = 1
    for i = 1, n do
        sum = sum * i
        --print (sum)
        print(string.format("%50.0f",sum))
        print(string.format("%50.0f",i))
    end
    return sum
end

function sumdigits(n)
   local sum = 0
   while n > 0 do
      sum = sum + n%10
      n = math.floor(n/10)
      --print (sum)
   end
   return sum
end
--print(factorial(100))
--print(string.format("%30.0f",factorial(100)))

s=bc.pow(2,1000):tostring()
z=0
for i=1,#s do
        z=z+s:byte(i)-("0"):byte(1)
end
print(z)
--print(sumdigits(factorial(100)))

--93326215443944102188325606108575267240944254854960571509166910400407995064242937148632694030450512898042989296944474898258737204311236641477561877016501813248

--93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000
