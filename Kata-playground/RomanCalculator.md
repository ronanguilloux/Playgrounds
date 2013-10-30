Roman Calculator
================

*SPOILER*: If you're a real ninja, don't check the sources until you've done your own kata!

Source:  http://codingdojo.org/cgi-bin/wiki.pl?KataRomanCalculator

Problem Description
-------------------

"As a Roman Bookkeeper I want to add Roman numbers because doing it manually is too tedious." Given the Roman numerals, (IVXLCDM which means one, five, ten, fifty, hundred, fivehundred and a thousand respectively), create two numbers and add them. As we are in Rome there is no such thing as decimals or int, we need to do this with the strings. An example would be "XIV" + "LX" = "LXXIV"

There are some rules to a Roman number:

Numerals can be concatenated to form a larger numeral ("XX" + "II" = "XXII")
If a lesser numeral is put before a bigger it means subtraction of the lesser from the bigger ("IV" means four, "CM" means ninehundred)
If the numeral is I, X or C you can't have more than three ("II" + "II" = "IV")
If the numeral is V, L or D you can't have more than one ("D" + "D" = "M")

Clues
-----

String grouping and concatenation is key to solving this kata. But remember the rule that lesser numerals can preceede bigger ones.

Suggested Test Cases
--------------------

The first test case(s) are pretty easy. I won't put the test cases here since I feel this kata is one of the better ones I have done when it comes to practicing finding out what the next test case is.


