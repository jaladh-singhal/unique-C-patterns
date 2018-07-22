## Description
This is an animation of *flower pot cracker* which will sparkle out the letters of your name.

This is a firework show which will fascinate you for sure by playing with first 6 letters of your name. It _do not uses_ ```graphics.h``` and is purely loop based and time-controlled pattern.

## Compatibility
This program is available for **_two compilers_**:

__1. Turbo C__ - Because this program uses ```gotoxy()``` function for cursor movement

__2. GCC__ - It uses substitute of ```gotoxy()``` for **gcc compiler** by using some functions of ```windows.h``` library (including ```Sleep()``` function for time delay too) which makes it _compatible only on Windows_. For Linux and Mac OS X, please contribute the necessary changes.
