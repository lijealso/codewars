int basic_op(char op, int value1, int value2) {
  int result;
  if (op == '+')
  {
    result = value1 + value2;  
  }
    if (op == '-')
  {
    result = value1 - value2;  
  }
    if (op == '*')
  {
    result = value1 * value2;  
  }
    if (op == '/')
  {
    result = value1 / value2;  
  }
  
  return result;
}