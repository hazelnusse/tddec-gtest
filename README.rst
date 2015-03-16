==========================================================
Test-Driven Development for Embedded C (using GTest/GMock)
==========================================================

This project is my place to record my work going through all tests, examples,
and exercises presented in the book Test-Driven Development for Embedded C
[TDDEC]_ by James W. Grenning. However, instead of using CppUTest and Unity as
is done in the book, I instead use GTest and/or GMock. Additionally, instead of
using Makefiles directly, I use CMake and CTest.

I am writing the code as I read through the book, so commits should follow the
order of presentation of the book.

.. [TDDEC] https://pragprog.com/book/jgade/test-driven-development-for-embedded-c

---------------------------------
Downloading and building the code
---------------------------------

First, clone the git repository::

  $ git clone https://github.com/hazelnusse/tddec-gtest.git

or, if you don't have git, just download the latest zip of master from
https://github.com/hazelnusse/tddec-gtest/archive/master.zip and unzip it::

  $ unzip tddec-gtest-master.zip

Next, go into the source directory and create a build directory::

  $ cd tddec-gtest
  $ mkdir build
  $ cd build

Now, build the project and run the tests::

  $ cmake ..
  $ make
  $ make test

Enjoy.


