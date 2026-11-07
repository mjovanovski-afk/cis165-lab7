CIS 165 - Lab 7

Inputs / Starting Data:

A series of integers entered by the user, terminated by the sentinel value -99.

Variables:

SENTINEL: Named constant set to -99.

inputval: Integer variable to store each input entered by the user.

minval: Integer variable to track the smallest value entered.

maxval: Integer variable to track the largest value entered.

data: Boolean flag initialized to false to track if valid data has been entered.

Calculations and Comparisons:

If data is false on the first non-sentinel input, initialize both minval and maxval to inputval and set data to true.

For subsequent inputs, compare inputval with minval (update if inputval is less than minval) and maxval (update if inputval is greater than maxval).

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

CODE EXPLANATION ANSWERS

Trace one series through the loop:
Input series: -8, -3, -12, -99

Priming read gets -8. Loop starts because -8 is not equal to -99.

data is false: minval becomes -8, maxval becomes -8, and data flips to true.

Next read gets -3. Loop continues because -3 is not equal to -99. data is true. Since -3 is greater than -8, maxval updates to -3.

Next read gets -12. Loop continues. Since -12 is less than -8, minval updates to -12.

Next read gets -99. Loop terminates because inputval equals SENTINEL.

Final output: Smallest -12, Largest -3.

How does your code keep -99 out of the calculations?
The priming read gets input before the loop starts, and the update read occurs at the very bottom of the loop body. The loop header while (inputval != SENTINEL) checks for -99 before any comparisons or assignments happen inside the loop block.

Why is initializing both extrema to zero incorrect for some series?
If a series contains only negative numbers like -8, -3, -12, initializing maxval to 0 causes the program to incorrectly report 0 as the maximum, even though 0 was never entered. Similarly, for all-positive numbers, initializing minval to 0 makes 0 the false minimum.

How do you distinguish an empty series from a series containing zero?
The boolean flag data starts as false. If the user enters -99 immediately, the loop never runs and data remains false. If the user enters 0, the loop executes, sets data to true, and sets both minval and maxval to 0.
