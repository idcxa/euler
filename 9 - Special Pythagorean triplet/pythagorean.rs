
/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/


fn main() {
    for i in 0..1000 {
        for j in 0..i {
            let c = i32::pow(i,2) + i32::pow(j,2);
            c = c as f64

            if c.floor() == c {
                println!("{}, {}", i, j);
            }
        }
    }


}

