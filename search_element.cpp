#include <iostream>

using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int index = -1, mynum, size;

  cout << "Enter your value: ";
  cin >> mynum;

  size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == mynum)
    {
      index = i;
    }
  }
  (index != -1) ? cout << index : cout << "Invalid" << endl;
  return 0;
}
