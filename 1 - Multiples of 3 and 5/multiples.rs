// https://projecteuler.net/problem=1
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below 1000.
//

fn multiplesi(x: i32) -> i32 {
    let mut sum: i32 = 0;
    for i in 1..x + 1 {
        if i % 3 == 0 || i % 5 == 0 {
            sum += i;
        }
    }
    sum
}

fn multiplesr(x: i32) -> i32 {
    if x == 1 {
        return 0;
    }
    (x % 3 == 0 || x % 5 == 0) as i32 * x + multiplesr(x - 1)
}

fn main() {
    println!("{}", multiplesi(9));
    println!("{}", multiplesr(9));
}
