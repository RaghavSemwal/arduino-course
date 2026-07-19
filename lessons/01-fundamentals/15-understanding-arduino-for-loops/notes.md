# Notes - Tutorial 15: Understanding Arduino For Loops

Notes on For Loops

A for loop is used when you know exactly how many times you want to repeat an action.

Syntax: for(initialization; condition; increment) { // code }

Initialization: Sets the starting point (e.g., int i = 0).

Condition: Loop runs while this is true (e.g., i < number_of_blink).

Increment: Updates the loop variable each cycle (e.g., i++).

In this example, the loop ensures the LED blinks the specified number of times. 


Key Takeaways

For loops reduce repetitive code and make programs cleaner.

Functions like blink() make code modular and reusable.

Combining functions with loops is a powerful way to control hardware efficiently.

Practical Exercise

Try changing the delay values to make LEDs blink faster or slower.

Add another LED on a different pin and call blink() with different parameters.

Experiment with nested loops to create more complex blinking patterns.