\# 01 - Balanced Parentheses using Stack



\## Problem Statement

Given a string containing brackets (), {}, \[], check whether the brackets are balanced. Every opening bracket must have a matching closing bracket in the correct order.



\## Algorithm

1\. Create an empty stack.

2\. Traverse each character in the string.

3\. If it is an opening bracket (, {, \[ - push it onto the stack.

4\. If it is a closing bracket ), }, ]:

&#x20;  - If stack is empty, return Not Balanced.

&#x20;  - Pop the top and check if it matches. If not, return Not Balanced.

5\. After traversal, if stack is empty, it is Balanced. Otherwise, Not Balanced.



\## Sample Input / Output

Input 1: {\[()]} -> Output: Balanced

Input 2: {\[(])} -> Output: Not Balanced

Input 3: ((())) -> Output: Balanced



\## Test Cases

| Input | Expected Output |

| --- | --- |

| {\[()]} | Balanced |

| {\[(])} | Not Balanced |

| ((())) | Balanced |

| ( | Not Balanced |



\## Time and Space Complexity

\- Time Complexity: O(n)

\- Space Complexity: O(n)

