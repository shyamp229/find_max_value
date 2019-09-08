#include <stdio.h>
#include <stdlib.h>

//DO NOT change the following declaration (you may change the initial value).
unsigned ConfidenceValues[] = {1, 70, 0, 0, 21, 2, 3, 0, 3, 0};     // 1
unsigned ClassID;

int main() {
    
    unsigned MaxValue,i;                               // Identifying my variables
    MaxValue = ConfidenceValues[0];                    // Relating first index to MaxValue
    ClassID = 0;                                       // Initializing ClassID
    for(i = 1; i < 10; i++)                            // Creating a for loop to check every Confidence Value
    {
        if (ConfidenceValues[i] > MaxValue) {          // If ConfidenceValue is greater or equal to MaxValue
            MaxValue = ConfidenceValues[i];            // then MaxValue = ConfidenceValues[i]
            ClassID = i;                               // and ClassID is equal to index value.
        }
        
    }
    
            // Your program should use this print statement.
            // Do not change the format!
            printf("%d is the class with highest confidence value.\n", ClassID);

  return 0;
}
