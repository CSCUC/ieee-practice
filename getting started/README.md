# Getting started

## What is competitive programming?

In competitive programming, one is given a list of problems, and a time limit in which to solve them. The job of the solver is to first understand the question, then create code that can generate a solution from a set of inputs for an online Judge to score.

## How does one do this?

The first skill one must have with competitive programming is being able to communicate with the Judge. In most competitions, the Judge will send the desired inputs to a program's `STDIN`, and receive the answer in `STDOUT`

What does this mean for c++? A program should input values from `cin` and output values to `cout`, just like a command line program would. Python uses `input()` and `print()`.

```c++
int main(){
    int input;      // declare a variable
    cin >> input;   // input into that var
    cout << input   // output to STDOUT
}
```

[Problem 1](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/print-the-numbers/)

This question asks for the code to input the values, then print them right back out

This is a solution in c++:

```c++
int main(){
    int n, value;
    cin >> n;
    while(n--){
        cin >> value;
        cout << value;
    }
}
```

Notice that the code outputs the values that it reads in, as it reads them. The order that the code sends solutions to the Judge *does not* matter. 

Another trick used in this code is the loop `while(n--)`. This loop will decrement n by one every time the loop is exectuted, until n is zero, at which point the code will continue on.

[Problem 2](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/)

Now the numbers must all be input, multiplied together, then the result output mod 10^9 + 7