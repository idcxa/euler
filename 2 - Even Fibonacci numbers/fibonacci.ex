defmodule Fibonacci do

  def main(x)

  def factorial(x) when x <= 1 do 1 end

  def factorial(x) do
    x * factorial(x - 1)
  end

end

Fibonacci.main
