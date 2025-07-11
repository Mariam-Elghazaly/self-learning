# Trend Detection Using Count-Based Heuristic

In this code, I tried to make the logic as **simple as possible** using a single `count` variable to detect the overall trend in a 10-element integer array.

### 🔍 Approach

The approach is based on comparing each number to the one before it:

- If the number is greater than the previous → `count++`
- If it’s smaller → `count--`

At the end, we check the value of `count` to determine:

- `+9`: strictly increasing
- `-9`: strictly decreasing
- `0`: not changing
- Otherwise: increasing and then decreasing

> ⚠️ **Note**:  
> This approach uses a simple count-based heuristic. While it's not designed to detect complex trend shifts in all cases, it works effectively when the number of inputs is even, including cases with multiple trend changes (e.g., increasing → decreasing → increasing).
> It is a lightweight solution suitable for controlled input sizes like 10 numbers.

---

## 🧪 Sample Inputs & Outputs

### ✅ Sample 1: Increasing

sample 1:

Please element number 1 : 1
Please element number 2 : 2
Please element number 3 : 3
Please element number 4 : 4
Please element number 5 : 5
Please element number 6 : 6
Please element number 7 : 7
Please element number 8 : 8
Please element number 9 : 9
Please element number 10 : 10
the numbers in the array are increasing

sample 2 :

Please element number 1 : 10
Please element number 2 : 9
Please element number 3 : 8
Please element number 4 : 7
Please element number 5 : 6
Please element number 6 : 5
Please element number 7 : 4
Please element number 8 : 3
Please element number 9 : 2
Please element number 10 : 1
the numbers in the array are decreasing

sample 3:

Please element number 1 : 5
Please element number 2 : 5
Please element number 3 : 5
Please element number 4 : 5
Please element number 5 : 5
Please element number 6 : 5
Please element number 7 : 5
Please element number 8 : 5
Please element number 9 : 5
Please element number 10 : 5
the numbers in the array are not changing

sample 4:

Please element number 1 : 1
Please element number 2 : 2
Please element number 3 : 3
Please element number 4 : 4
Please element number 5 : 5
Please element number 6 : 4
Please element number 7 : 3
Please element number 8 : 2
Please element number 9 : 1
Please element number 10 : 0
the numbers in the array are increasing and then decreasing\

sample 5:

Please element number 1 : 1
Please element number 2 : 2
Please element number 3 : 3
Please element number 4 : 2
Please element number 5 : 3
Please element number 6 : 4
Please element number 7 : 3
Please element number 8 : 2
Please element number 9 : 1
Please element number 10 : 0
the numbers in the array are increasing and then decreasing

smaple 6:

Please element number 1 : 1
Please element number 2 : 2
Please element number 3 : 1
Please element number 4 : 2
Please element number 5 : 1
Please element number 6 : 2
Please element number 7 : 1
Please element number 8 : 2
Please element number 9 : 1
Please element number 10 : 2
the numbers in the array are increasing and then decreasing
