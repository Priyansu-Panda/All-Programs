   int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    
    // first = third;      // invalid 
/*
    attempting to assign the address stored in third to first, which is incorrect. first is an integer variable, and third is a pointer variable. They have incompatible types. This operation should generate a compilation error.
*/
    third =  third + 2;     // 11 11
    *third = * third + 2;
    cout << first << " " << second << endl;
 