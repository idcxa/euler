function main(x)
  for i = 1:x
    for j = 1:i
      c = hypot(i, j)
      if floor(c) == c && i + j + c == 1000
        println(i, ", ", j, ", ", c)
        return i*j*c
      end
    end
  end
end

println(BigInt(main(1000)))
