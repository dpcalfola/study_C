#include <stdio.h>

void main() {
    // Index starts at 0
    enum day1 {
        SUN, MON, TUE, WED, THU, FRI, SAT
    } d1;

    // Index starts at 2
    enum day2 {
        sun = 2, mon, tue, wed, thu, fri, sat
    } d2;

    d1 = WED; // WED index == 3 (sun==0, mon==1, ...)
    d2 = wed; // wed index == 5 (sun==2, mon==3, ...)

    printf("The decimal value of enum d1 is %d \n", d1);
    printf("The decimal value of enum d2 is %d \n", d2);
}