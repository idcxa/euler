
# A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

# Find the largest palindrome made from the product of two 3-digit numbers.

function isPalindrome(x)
    if string(x) == reverse(string(x))
        return true
    end
    return false
end

function largest()
    largest = 0
    for i = 100:999
        for j = 100:999
            n = i*j
            if isPalindrome(n) && n > largest
                largest = n
                println(i, ", ", j, ", ", n)
            end
        end
    end
    return largest
end

println("output = ", largest())

