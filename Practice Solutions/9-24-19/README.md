# IEEE Practice 9/24/2019

### Warmup
#### linked list
https://www.geeksforgeeks.org/given-a-linked-list-which-is-sorted-how-will-you-insert-in-sorted-way/

### Problem 1
#### Perfect Team
https://codeforces.com/contest/1221/problem/C


<details><summary>Hint 1</summary>
<p>

Can you form a team with no coders? no mathematicians? what about no people of no specialization?

</p>
</details>
<details><summary>Hint 2</summary>
<p>

When you have `C > M`, or `M > C` those extra members can be sent to the `N` group, and if `N < C` still holds, then take members out of `M` and `C` evenly until they are even

</p>
</details>
<details><summary>Hint 3</summary>
<p>

number of teams possible `= min(M, C, (M + C + N) / 3)`

</p>
</details>



[C++]()
[python](./perfectTeam.py)

### Problem 2 
#### Standing Ovation

https://code.google.com/codejam/contest/6224486/dashboard


<details><summary>Hint 1</summary>
<p>

How many people must be clapping before `3` people of shyness level `2` will clap?

How many are clapping after?

</p>
</details>


<details><summary>Hint 2</summary>
<p>

Starting at the beginning of the set of clappers, how many people must be clapping from clap nodes `N-1` for node `N` clappers to also stand?

how can this be used?

</p>
</details>

<details><summary>Hint 3</summary>
<p>

Sum up the number clapping at each node. When inspecting a new node, if the sum up to that point is less than the required, invite clappers until the shyness level is satisfied.

</p>
</details>

[C++](./cryptoDisk.cpp)
[python](./cryptoDisk.py)


### Problem 3
#### 2048

https://codeforces.com/contest/1221/problem/A

<details><summary>Hint 1</summary>
<p>

Do input values greater than 2048 matter? What might be a good data type to remember the other values?

</p>
</details>

<details><summary>Hint 2</summary>
<p>

Map or array are good solutions for the storage issue. How do you test if a given set of numbers satisfies the problem?

</p>
</details>

<details><summary>Hint 3</summary>
<p>

Start from one, take the count of 1's and move half of that to the count of 2's. Then half of the 2's to the 4's, etc. until the count of 2048's is calculated.

There is a simpler solution, try to find it

</p>
</details>

[C++](./rumour.cpp)
[python](./2048.py)