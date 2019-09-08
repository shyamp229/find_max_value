#include <stdio.h>
#include <stdlib.h>

/* 
Baseline

ECE 2035 Homework 1-2

This is the only file that should be modified for the C implementation
of Homework 1.

This program computes the index (ClassID) at which the maximum value occurs
in a set of 10 confidence values.

If there are two or more indices that have equal maximum values, the LARGER 
index is chosen.

FOR FULL CREDIT, BE SURE TO TRY MULTIPLE TEST CASES and DOCUMENT YOUR CODE.

*/

//DO NOT change the following declaration (you may change the initial value).
unsigned ConfidenceValues[] = {1, 70, 0, 0, 21, 2, 3, 0, 3, 0};     // 1
unsigned ClassID;
/*
For the grading scripts to run correctly, the above declarations
must be the first lines of code in this file (for this homework
assignment only).  Under penalty of grade point loss, do not change
these lines, except to replace the initial values while you are testing
your code.  

Also, do not include any additional libraries.
 */

int main() {
    
    unsigned MaxValue,i;                                    // Identifying my variables
    MaxValue = ConfidenceValues[0];                    // Relating first index to MaxValue
    ClassID = 0;                                       // Initializing ClassID
    for(i=1;i<10;i++)                                  // Creating a for loop to check every Confidence Value
    {
        if(ConfidenceValues[i] > MaxValue){             // If ConfidenceValue is greater or equal to MaxValue
            MaxValue = ConfidenceValues[i];            // then MaxValue = ConfidenceValues[i]
            ClassID = i;                               // and ClassID is equal to index value.
        }
        
    }
    
            // Your program should use this print statement.
            // Do not change the format!
            printf("%d is the class with highest confidence value.\n", ClassID);

  return 0;
}
