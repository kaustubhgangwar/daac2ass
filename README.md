# daac2ass
# DAA C-2 Assignment

**Group No-** 21

**Faculty Name-** Mr. Rahul Kala

**Mentor Name-** Md. Meraz

**Team Members**

**Enrollment No.** / Name / GithubId

**IIT2019114** / Sarthak / sarthak0502

**IIT2019115** / Kaustubh / kaustubhgangwar

**IIT2019116** / Harsh Singh / hrs10

---
## Problem Statement

Given a sorted array arr[] and a number x, write a function that
counts the occurrences of x in arr[]. Solve using divide and
conquer algorithm.

---

**Test case**

We have used random numbers generator for testing purpose.
let Say after Random Generation 
our arr is { 12 , 14 , 14 , 14 , 15 , 18 , 20 } and x is 14.

So Output will be Element 14 Occurs 3 Times.

---


### Theory

We will find the First and Last occurence index of x. 

The number of occurrences is simply the last occurrence – first occurrence + 1.

---

***Time Complexity –*** O(logN) where N is the size of the array. Here we use a binary search which leads us to logN time complexity.
***Space Complexity –*** O(1) because we don’t use any auxiliary space here.
