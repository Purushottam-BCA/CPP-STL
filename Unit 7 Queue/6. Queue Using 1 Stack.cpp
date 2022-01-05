stack<int> s;

void enQue(stack<int> &s, int x)
{
  s.push(x);
}

int recurse(stack<int> &s)
{
    if(s.size()==1)
    {
      int M = s.top();
      s.pop();
      return M;
    }

    // Store Current Val
    int curr_val = s.top();
    s.pop(); // Reduce stack size by 1

    // Calling Recursion on remaining elements

    int res = recurse(s);

    // Pushing current element after returning back
    s.push(curr_val);

    return res;
}

int deQue(stack<int> &s)
{
  if(s.empty())
    return -1;
  else
    return recurse(s);
}
