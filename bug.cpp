int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; 
  int *ptr2 = ptr; 
  *ptr2 = 30; 
  return 0; 
}