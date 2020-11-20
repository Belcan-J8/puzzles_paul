# Puzzles
Puzzles for Potentials

## Summary
Hello! Welcome to our little puzzle! In this folder we have a few C++ source files illustrating a toy example, but modeling real-world coding activities. We have a Car class which makes use of a FuelGauge class and both classes make use of a Logger class. There is an entry point in main.cpp that commands the Car. In `main()` we log the start and end of application execution. We instantiate a Car and command it to turn left, then right, then accelerate. For each of these actions the Car class decrements fuel from the FuelGauge and logs its action. When the fuel runs low, the fuel gauges logs that as well.

Our "customer" has asked to make these status messages more visible on the console. We have identified an open-source library, [termcolor](https://github.com/ikalnytskyi/termcolor), that allows for colorful console output cross-platform so we can save time implementing a solution on both Windows and Linux (our customers use both operating systems).

Remember, we are not just assessing your coding abilities, but also your ability to manage requirements and to think critically.

## Part 1
Given the source code in this folder:
1. Create a build script (e.g. `build.sh`) that compiles the code.
1. Clone and incorporate the termcolor library in any way you see fit
1. Using termcolor in conjunction with the Logger class, make the messages print in color
    1. The "Low fuel!" message should print in **red**
    1. The status messages from the car should print in **blue**
1. You may modify any of the class implementations, but the core logic and message strings should remain the same.
1. You may *not* modify the ILogger interface (our other projects depend on it!)
1. Make any improvements or modernizations you see fit. Assume support for C++17.
1. Commit your changes and open a pull request

## Part 2
After you have completed part 1, a team member will push changes to a branch called *SupportColorfulLogging*. It seems while you were making these changes for our "customer", your team member made similar changes to solve the problem. We need to get on the same page!
1. Merge the *SupportColorfulLogging* branch into your branch
1. Preserve the new Logger classes (but feel free to suggest improvements)
1. Ensure there are no regressions
1. You may *not* modify the ILogger interface
1. Make any improvements or modernizations you see fit. Assume support for C++17.
1. Commit your changes and open a pull request

## Part 3
While you were working on this fancy new feature, the customer came back with some more ideas. They want to see two cars in action (executing the same instructions: turn left, then right, then accelerate). But now they've decided they want different colors!
1. Expand `main()` to exercise two Cars
1. The "Low fuel!" message should print in **yellow**
1. The status messages from the car should print in **cyan**
1. The status messages from the car should print in **magenta**
1. You may *not* modify the ILogger interface
1. Make any improvements or modernizations you see fit. Assume support for C++17.
1. Commit your changes and open a pull request
