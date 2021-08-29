int pow(int base, int x) {
  int ans = 1; 
  while (x != 0) {
    if (x % 2 == 0){
      base = base * base;
      x /= 2;
    }
    else{
      ans = ans * base;
    x = x - 1;
    }
  } 
  return ans;
}
