#include <iostream>
#define N 15

using namespace std;

int main()
{
  int mas[N];

  cout << "Enter 15 numbers: " << endl;

  for (int i = 0; i < N; i++) {
    cin >> mas[i];
  }

  int A;

  cout << "Enter number to find: ";

  cin >> A;

  int flag1 = 0;

  for (int i = 0; i < N; i++) {
    if (mas[i] == A) {
      cout << "Linear number stored in: " << i << endl;
      flag1 = 1;
      break;
    }
  }

  if (flag1 == 0) {
    cout << "Not found" << endl;
  }

  cout << "Sorted array in descending order: ";

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N - i; j++) {
      if (mas[j] < mas[j + 1]) {
        int t = mas[j];
        mas[j] = mas[j + 1];
        mas[j + 1] = t;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    cout << mas[i] << " ";
  }
  

  int Left = 0, Right = N - 1, Middle;
  int flag2 = 0;

  while (Left <= Right) {
    Middle = (int)((Left + Right) / 2);
    if (mas[Middle] == A) {
      flag2 = 1;
      break;
    }
    if (A < mas[Middle]) {
      Left = Middle + 1;
    }
    else {
      Right = Middle - 1;
    }
  }

  if (flag2) {
    cout << endl << "Binary number stored in: " << Middle << endl;
  }
  else {
    cout << "Not found" << endl;
  }

  return 0;
}