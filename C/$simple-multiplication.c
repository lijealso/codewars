int simple_multiplication(int number) {
    int dest;
    if (number % 2 == 1)
      {
      dest = number * 9;
      }
    else 
    {
      dest = number * 8;
    }
  return dest;
}