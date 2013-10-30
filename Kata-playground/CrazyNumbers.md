Crazy numbers
=============

*SPOILER*: If you're a real ninja, don't check the sources until you've done your own kata!

Source: http://goo.gl/vPK8A

Problem Description
-------------------

Let's invent a very simple game:

* The first player gives a positive integer X.
* The second player has to determine the next Y number greater than X, such that Y is the closest possible to X, and Y must use exactly the same digits as X.

In order to determine the second player has found the best solution, you decide to create a program to automatically calculate the best possible score.

Function input
--------------

One line containing a positive integer X containing between 2 and 20 digits included.

Function output
---------------

Your function must return an integer Y such that:

* Y greater than X
* Y is composed of the same numbers X
* Y is the closest possible to X
