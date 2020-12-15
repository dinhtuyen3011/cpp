/* Three-Dimensional Array */
//1. Initializing Three-Dimensional Array?
//a. Method 1?
int x[2][3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
                 11, 12, 13, 14, 15, 16, 17, 18, 19,
                 20, 21, 22, 23};
                 
//b. Better Method?
int x[2][3][4] = 
 { 
   { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} },
   { {12,13,14,15}, {16,17,18,19}, {20,21,22,23} }
 };
 
//2. Accessing elements in Three-Dimensional Arrays?

