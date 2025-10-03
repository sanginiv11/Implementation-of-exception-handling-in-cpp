# Implementation-of-exception-handling-in-cpp
## Objective
Demonstrate practical exception handling in C++ for arithmetic operations and input validation using try, throw, and catch to prevent crashes and provide clear feedback.

Software used: MinGW C++ compiler, Visual Studio Code, online C/C++ compiler.

## Program 1 Division with error handling
Explanation and theory: This program safely performs division on two floating-point inputs by guarding against a zero divisor. The logic checks the denominator before dividing; if it is zero, an exception is thrown and intercepted by a catch block that prints an error notice. If the divisor is nonzero, the quotient is computed and shown to the user. This pattern avoids undefined behavior and improves robustness in numeric workflows.

Algorithm:
- Start
- Read two numbers n1 and n2
- If n2 equals 0, throw an exception
- Otherwise compute ans = n1 / n2
- Print the result
- Catch any thrown error and display a message
- End

## Program 2 Age input validation
Explanation and theory: This program verifies an age input and enforces a minimum threshold using exceptions. If the provided age is below 18, execution throws an error that is then caught and reported with an underage message. When the age meets or exceeds the requirement, a confirmation message is printed. The technique showcases how to manage invalid states cleanly without terminating the application abruptly.

Algorithm:
- Start
- Prompt for age value
- If age < 18, throw an exception
- Else print “APPROVED”
- Catch the exception and print an “UNDERAGE” message with the age
- End

## Conclusion
These examples illustrate using exceptions to guard typical risk points—division by zero and invalid inputs—so programs remain stable and communicative. By isolating risky operations in try blocks and handling failures in catch blocks, the code avoids abrupt termination, provides helpful messaging, and keeps control flow predictable. This approach forms a foundation for building more resilient applications that validate inputs and handle runtime errors gracefully.
