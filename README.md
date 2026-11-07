CIS 165 - Lab 7: Loops, Largest and Smallest Values

Inputs / Starting Data:

A series of integers entered by the user, terminated by the sentinel value -99.

Variables:

SENTINEL: Named constant set to -99.

inputVal: Integer variable to store each input entered by the user.

minValue: Integer variable to track the smallest value entered.

maxValue: Integer variable to track the largest value entered.

hasData: Boolean flag initialized to false to track if valid data has been entered.

Calculations and Comparisons:

If hasData is false on the first non-sentinel input, initialize both minValue and maxValue to inputVal and set hasData to true.

For subsequent inputs, compare inputVal with minValue (update if inputVal is less than minValue) and maxValue (update if inputVal is greater than maxValue).

Checks:

Check if the first entry is -99. If so, skip the loop body and display a message that no data values were entered.

Expected Output:

The smallest and largest values entered, or a clear message stating no data values were entered if -99 is entered first.

COMPILE AND RUN INSTRUCTIONS

OnlineGDB:

Open OnlineGDB at www.onlinegdb.com.

Select C++17 from the language dropdown menu in the top right corner.

Paste the contents of min_max.cpp into the code editor.

Click the green Run button to compile and execute the program.

TEST RESULTS

Test Case / Input: 8, 3, 12, -99
Expected Result: Smallest 3, largest 12
Actual Output: Smallest: 3, Largest: 12
Pass / Fail: Pass

Test Case / Input: -8, -3, -12, -99
Expected Result: Smallest -12, largest -3
Actual Output: Smallest: -12, Largest: -3
Pass / Fail: Pass

Test Case / Input: 5, -99
Expected Result: Smallest 5, largest 5
Actual Output: Smallest: 5, Largest: 5
Pass / Fail: Pass

Test Case / Input: 0, 0, -99
Expected Result: Smallest 0, largest 0
Actual Output: Smallest: 0, Largest: 0
Pass / Fail: Pass

Test Case / Input: -99
Expected Result: Clear no-data message
Actual Output: No data values were entered.
Pass / Fail: Pass

Test Case / Input: -15, 0, 42, -99
Expected Result: Smallest -15, largest 42
Actual Output: Smallest: -15, Largest: 42
Pass / Fail: Pass

Additional Test Explanation:

Test: -15, 0, 42, -99

What it checks: This test checks a mixed series containing negative numbers, zero, and positive numbers to ensure that transitions across zero calculate the minimum and maximum correctly.
