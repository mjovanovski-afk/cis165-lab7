Tools Used:
I used AI to clarify C++ syntax concepts and review the logic of sentinel-controlled loops.

Decision Made:
One design decision was how to initialize the minimum and maximum values without hardcoding zero. The AI suggested using a boolean flag (data) to detect the first valid input dynamically. I accepted this approach because it cleanly handles all-negative series, all-positive series, and immediate sentinel entries (-99) without using invalid default assumptions or magic numbers.

Specific Check:
I tested the all-negative input series -8, -3, -12, -99.

Expected result: Smallest -12, Largest -3

Actual output: Smallest: -12, Largest: -3
This check established that initializing minValue and maxValue from the first actual data input correctly avoids treating default zero as the maximum value.

Learning:

Can do myself: I can now write sentinel-controlled while loops using priming reads to process variable-length inputs cleanly.

Need to practice: I still need to practice handling non-numeric input errors and bad data entry gracefully in C++.
