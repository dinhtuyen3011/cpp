// int nums[2][3]  =  { {16, 18, 20}, {25, 26, 27} };

//-> In general, nums[i][j] is equivalent to *(*(nums+i)+j)

/* Array 01 */
*(*nums)     -> nums[0][0]  = 16
*(*nums + 1) -> nums[0][1]  = 18
*(*nums + 2) -> nums[0][2]  = 20

/* Array 02 */
*(*(nums + 1))     -> nums[1][0] = 25
*(*(nums + 1) + 1) -> nums[1][1] = 26
*(*(nums + 1) + 2) -> nums[1][2] = 27 



