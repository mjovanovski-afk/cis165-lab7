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

