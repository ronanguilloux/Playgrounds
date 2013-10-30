Kata Playground
===============


Disclaimer: Be a practicing ninja
---------------------------------

**Demonstrate your sportsmanship:  
Don't check the tar-gz'd solutions  
Until you've done your own kata!**

**Or choose the easy way,  
Use your stupid GUI extract tool,  
And just stay a script kiddie for the rest of your life :-(**


Available Katas
---------------

* [The Roman Calculator](https://github.com/ronanguilloux/Kata-playground/blob/master/RomanCalculator.md): "XX" + "II" = "XXII"
* [Crazy Numbers](https://github.com/ronanguilloux/Kata-playground/blob/master/CrazyNumbers.md): determine the next number greater & closest possible than X, using exactly the same digits as X
* [KataArgs](https://github.com/ronanguilloux/Kata-playground/blob/master/KataArgs.md): a command-line arguments parser

Build memo
----------

Archives all files and directories recursivly, in per-project files

``` bash
$ tar -cjf CrazyNumbers.tar.bz2 CrazyNumbers --exclude=vendors
$ tar -cjf RomanCalculator.tar.bz2 RomanCalculator --exclude=vendors
$ tar -cjf KataArgs.tar.bz2 KataArgs --exclude=vendors
```

License
-------

These Kata are released under the MIT License.  
See the bundled LICENSE file for details.


See also
--------

* http://blog.smartbear.com/programming/7-silly-programming-challenges-to-do-for-fun/
