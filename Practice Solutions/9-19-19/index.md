# IEEE Practice 9/19/2019


### Problem 1 
#### Bear Sums
https://csacademy.com/ieeextreme-practice/task/bear-sums/


<details><summary>Hint 1</summary>
<p>

Think about the numbers that form the solution - they form a pair of values, `N`, the most recently read in value, and `Sum - N`. How might you figure out that you have seen `Sum - N` before? 

</p>
</details>
<details><summary>Hint 2</summary>
<p>

https://en.cppreference.com/w/cpp/container/set
 
A set is a data structure that can accomplish the above

</p>
</details>
<details><summary>Hint 3</summary>
<p>

Input the values `N` in order. As you do, first check to see if `Sum - N` is already in the set. If it is, you have found your value, and can output it. If not, insert it into the set and continue

</p>
</details>


</details>



### Problem 2 
#### Crypto Disk

https://csacademy.com/ieeextreme-practice/task/d48ada9a7213299f1b24b22b2fb9443f/


<details><summary>Hint 1</summary>
<p>

In order to calculate the distance traveled, first you must create some association between the letter and the position the letter's hole is in

</p>
</details>


<details><summary>Hint 2</summary>
<p>

This can be done in many ways, the simplest would be to make an array. Each array element should correspond to one letter of the alphabet, and then store the positional information for the letter inside. 

</p>
</details>

<details><summary>Hint 3</summary>
<p>

Calculate the `x` and `y` position by using the equations `x = r * cos(θ)` and `y = r * sin(θ)`, where `r` is the value given at the start, and `θ` is specific to each letter. Distance traveled between two points can be found with `dist = sqrt((x1 - x2)^2 + (y1 - y2)^2)`

</p>
</details>


### Problem 3
#### Rumour Tree

https://csacademy.com/ieeextreme-practice/task/9ca8fafd184f553a903734761546a224/

<details><summary>Hint 1</summary>
<p>

Write out the binary representation of he first 15 values in the tree, notice anything?

</p>
</details>

<details><summary>Hint 2</summary>
<p>

Leading bits in the binary representation are shared between the node, and its parents, and its siblings. Look at how much they change when a edge is traversed.

</p>
</details>

<details><summary>Hint 3</summary>
<p>

Remove bits from the right of the binary representation until the values are equal. The number of bits removed is how many edges were traversed.

</p>
</details>

### Tricky Problem 
#### Great Fence

https://codeforces.com/contest/1221/problem/D