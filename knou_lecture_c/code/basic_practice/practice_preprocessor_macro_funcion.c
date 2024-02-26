//#include <stdio.h>
//
//// The difference that parentheses make when using the macro function
//#define Add1(x, y) x+y // x and y are considered as char?
//#define Add2(x, y) ((x)+(y)) // 10 * (3+4) = 70
//#define Multiple1(x, y) x*y // 1+2*3+4 = 11
//#define Multiple2(x, y) ((x)*(y)) // 3*7 = 21
//
//// Conclusion: Always use parentheses when using the macro function
//
//
//
//void main() {
//    int a1, a2, m1, m2;
//    a1 = 10 * Add1(3, 4);
//    a2 = 10 * Add2(3, 4);
//    m1 = Multiple1(1 + 2, 3 + 4);
//    m2 = Multiple2(1 + 2, 3 + 4);
//
//    printf("a1 is %d\n", a1);
//    printf("a2 is %d\n", a2);
//    printf("m1 is %d\n", m1);
//    printf("m2 is %d\n", m2);
//}