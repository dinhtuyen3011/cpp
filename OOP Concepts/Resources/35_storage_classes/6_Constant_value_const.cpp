// 1. Con trỏ trỏ đến một hằng số kiểu int: 
//-> giá trị của vùng nhớ mà con trỏ ptrVar trỏ đến không được phép thay đổi.
int const *PtrVar;
int const (*PtrVar);

// 2. Hằng con trỏ trỏ đến kiểu int 
//-> địa chỉ vùng nhớ mà con trỏ PtrVar không được phép thay đổi.
int *const PtrVar;
int (*const PtrVar);
