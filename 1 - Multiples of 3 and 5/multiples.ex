defmodule Multiples do

  @moduledoc"""
    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
    The sum of these multiples is 23.

    Find the sum of all the multiples of 3 or 5 below 1000.
  """

  # Solution with recursion
  def sum(x, max) when x >= max do 0 end
  def sum(x, max) when rem(x,3) == 0 or rem(x,5) == 0 do
    x + sum(x + 1, max)
  end
  def sum(x, max) do
    sum(x + 1, max)
  end

  # Solution with enums
  def enum(x, max) do
    Enum.sum(
      Enum.filter(x..max-1, fn x -> rem(x,3) == 0 or rem(x,5) == 0 end)
    )
  end

end

IO.puts(Multiples.sum(1, 1000))

#IO.puts(Multiples.enum(1,1000))
