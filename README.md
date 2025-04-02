Bessie’s Question
[ Memory: 64 MB, CPU: 1 sec ]

Farmer John is driving around a city, which can be modeled as a large 2D grid of unit cells. Each minute, Farmer John moves to precisely one of the four neighboring cells. In this problem, Farmer John’s movement can be described by a sequence of statements containing two parameters - Di
 and Si
. Di
 is a character representing the direction (‘N’ for north, ‘E’ for east, ‘S’ for south, ‘W’ for west). Si
 is an integer representing the number of steps taken in that direction. For example, the statement “E 8” would mean that Farmer John spent 8 minutes driving east - a total of 8 steps in that direction. Note that Farmer John might visit the same position multiple times.

Bessie claims that Farmer John visited some positions multiple times, but he never revisits the same position within x minutes. Find the value of x. 

INPUT FORMAT

* Line 1: A single integer: N (N ≤ 100)

* Lines 2..N+1: Each line contains Di
 and Si
 (1≤Si≤10
)

OUTPUT FORMAT

A single integer denoting the value of x. Print -1 if Farmer John never revisits a single position.

SAMPLE INPUT

4
N 8
E 3
S 6
W 4
SAMPLE OUTPUT

18
MODE: normal
Language 
cpp
