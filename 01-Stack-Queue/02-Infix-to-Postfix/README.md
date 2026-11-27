\# 02 - Infix to Postfix Conversion using Stack



\## Problem Statement

Convert a given infix expression (e.g. A+B\*C) into postfix expression (e.g. ABC\*+) using stack. In infix, operator is between operands. In postfix, operator is after operands.



\## Algorithm

1\. Create an empty stack for operators.

2\. Scan infix expression from left to right.

3\. If character is operand (letter/digit), add it directly to postfix.

4\. If character is '(' push it onto stack.

5\. If character is ')' pop and add to postfix until '(' is found. Discard '('.

6\. If character is operator:

&#x20;  - While stack top has higher or equal precedence, pop and add to postfix.

&#x20;  - Push current operator onto stack.

7\. After scanning, pop all remaining operators and add to postfix.



\## Precedence

\- ^ : Highest (3)

\- \* , / : Medium (2)

\- + , - : Lowest (1)



\## Sample Input / Output

Input 1: A+B\*C -> Output: ABC\*+

Input 2: (A+B)\*C -> Output: AB+C\*

Input 3: A+B-C -> Output: AB+C-



\## Test Cases

| Input | Expected Output |

| --- | --- |

| A+B\*C | ABC\*+ |

| (A+B)\*C | AB+C\* |

| A+B-C | AB+C- |



\## Time and Space Complexity

\- Time Complexity: O(n)

\- Space Complexity: O(n)

