// A. Square Year
// time limit per test1 second
// memory limit per test256 megabytes
// One can notice the following remarkable mathematical fact: the number 2025
//  can be represented as (20+25)2
// .

// You are given a year represented by a string 𝑠
// , consisting of exactly 4
//  characters. Thus, leading zeros are allowed in the year representation. For example, "0001", "0185", "1375" are valid year representations. You need to express it in the form (𝑎+𝑏)2
// , where 𝑎
//  and 𝑏
//  are non-negative integers, or determine that it is impossible.

// For example, if 𝑠
//  = "0001", you can choose 𝑎=0
// , 𝑏=1
// , and write the year as (0+1)2=1
// .

// Input
// The first line of the input contains a single integer 𝑡
//  (1≤𝑡≤104
// ) — the number of test cases.

// The following lines describe the test cases.

// The only line of each test case contains a string 𝑠
// , consisting of exactly 4
//  characters. Each character is a digit from 0
//  to 9
// .

// Output
// On a separate line for each test case, output:

// Two numbers 𝑎
//  and 𝑏
//  (𝑎,𝑏≥0
// ) such that (𝑎+𝑏)2=𝑠
// , if they exist. If there are multiple suitable pairs, you may output any of them.
// The number −1
//  otherwise.
// Example
// InputCopy
// 5
// 0001
// 1001
// 1000
// 4900
// 2025
// OutputCopy
// 0 1
// -1
// -1
// 34 36
// 20 25

use std::io;

fn main(){


    // take input
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let t: usize = input.trim().parse().unwrap();

    // iterate over test cases
    for _ in 0..t {
        input.clear();
        io::stdin().read_line(&mut input).unwrap();
        let s = input.trim();

        // parse the year as an integer
        let year: i32 = s.parse().unwrap();

        // check if the year is a perfect square
        let sqrt = (year as f64).sqrt() as i32;
        if sqrt * sqrt != year {
            println!("-1");
            continue;
        }

        // find a and b such that (a + b)^2 = year

        if year%2==0 {
            let a = sqrt / 2;
            let b = sqrt / 2;
            println!("{} {}", a, b);
            continue;
        }
        else if year%2==1 {
            let a = sqrt / 2;
            let b = sqrt / 2 + 1;
            println!("{} {}", a, b);
            continue;
        }

       
    }
}