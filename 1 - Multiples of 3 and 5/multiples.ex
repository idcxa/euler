defmodule Multiples do

  @moduledoc"""
    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
    The sum of these multiples is 23.

    Find the sum of all the multiples of 3 or 5 below 1000.
  """

  def sum(x, max) when x >= max do 0 end

  def sum(x, max) when rem(x,3) == 0 or rem(x,5) == 0 do
    x + sum(x + 1, max)
  end

  def sum(x, max) do
    sum(x + 1, max)
  end

end

IO.puts(Multiples.sum(1, 1000))
