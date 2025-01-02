int main() {
  int x = 10;
  int *ptr = &x;
  int y = *ptr; // Create a copy of the value
  *ptr = 20; 
  int z = *ptr; // access the changed value
  int *ptr2 = new int; // Allocate new memory location 
  *ptr2 = *ptr; //copy the data into new memory location
  *ptr2 = 30;
  return 0;
} 