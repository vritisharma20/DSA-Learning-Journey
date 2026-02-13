// Decimal Number to Binary Number

/* 
It is used to convert a negative number into binary number.
using following steps :

1. First convert it into binary number.
2. Add a prefix 0.
3. Now do 1's compliment means flip the digits (o -> 1 , 1 -> 0).
4. Add +1.

for Example - int n = -10;

1. 1010 
2. 01010
3. 10101
4. 10101
   ___+1
   10110 

 ~~ (-10)10 = (10110)2

 Important Points:
- Rightmost bit is called LSB (Least Significant Bit)
- Leftmost bit is called MSB (Most Significant Bit)
- Binary numbers are base 2
*/


// Binary Number to Deciaml Number

/*
It is used to convert a binary number to deciaml number .
using following steps : 

1. First we do 1's compliment.
2. Add 1.

For example  -  (10110)

1. 01001
2. 01001
   ___+1
   01010


   as we alredy know 1010 is 10 and we already know it is a negative number so it is -10.

   ~~ (10110)2 = (-10)10
*/