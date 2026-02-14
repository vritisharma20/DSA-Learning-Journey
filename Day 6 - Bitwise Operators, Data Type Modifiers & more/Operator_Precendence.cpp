/*
// ================= OPERATOR PRECEDENCE =================

// Operator precedence decides which operator runs first
// when multiple operators are used in an expression.

// Higher precedence -> evaluated first
// If same precedence -> Associativity decides direction

// Example:
int x = 2 + 3 * 4;
// Multiplication (*) has higher precedence than (+)
// So: 3 * 4 = 12
// Then: 2 + 12 = 14


// ================= PRECEDENCE ORDER (High to Low) =================

// 1. ()        -> Parentheses (Highest)
// 2. Unary     -> ++  --  !  ~
// 3. *  /  %
// 4. +  -
// 5. <<  >>
// 6. <  <=  >  >=
// 7. ==  !=
// 8. &
// 9. ^
// 10. |
// 11. &&
// 12. ||
// 13. =  +=  -=  *=  /=  %=  (Lowest)


// ================= ASSOCIATIVITY =================

// Associativity tells direction of evaluation
// Left to Right  -> most operators
// Right to Left  -> assignment and unary operators

// Example (Left to Right):
int a = 10 - 5 + 2;
// 10 - 5 = 5
// 5 + 2 = 7

// Example (Right to Left):
int a, b, c;
a = b = c = 5;
// First c = 5
// Then b = 5
// Then a = 5


// ================= IMPORTANT NOTE =================

// Always use parentheses () to avoid confusion
// It improves readability and prevents logical errors

int result = (2 + 3) * 4;   // Clear and safe

*/

#include <iostream>
using namespace std;
int main()
{

    cout << (5 - 2 * 6) << endl;
    cout << ((5 - 2) * 6) << endl;
    cout << (4 * 5 % 2) << endl;

    return 0;
}