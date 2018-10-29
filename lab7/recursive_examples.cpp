#include<iostream>
using namespace std;

//BONUS MODULE: Recursion
//====================

// Recursion is an extremely powerful programming tool that has helped define much of
// modern computing.

// It is when a function calls itself.

// All recursive algorithms have two things:
// 1. A base case, or the simplest form of our problem for which we can give an immediate answer
// 2. A recursive step, which takes us closer to the base case

// Here's an example:
int sumDownward(int number) {
    if(number < 2) //base case
        return number;
    return number + sumDownward(number - 1); //recursive step
}

// And now for one a little tougher :)

// Say you have a staircase of size N stairs.  You can take one or two steps up the
// staircase at a time.  In how many different ways can you climb the staircase?
int countStairs(int N) {
    if(N < 3)
        return N;
    else {
        int one_step = countStairs(N - 1); //two recursive steps! What could this mean?
        int two_step = countStairs(N - 2);

        return one_step + two_step;
    }
}
// This solution actually scales horribly though, can you think of a way to make it better? (Hint: think dynamically)
// You don't need to know this, but it can make life easier, especially for the ✓+ ;)

int main() {
    cout << "sumDownward(10): " << sumDownward(10) << endl; 
    cout << "countStairs(1): " << countStairs(1) << endl;
    cout << "countStairs(2): " << countStairs(2) << endl;
    cout << "countStairs(3): " << countStairs(3) << endl;
    cout << "countStairs(35): " << countStairs(35) << endl;
}