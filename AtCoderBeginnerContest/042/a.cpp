#include <iostream>

using namespace std;

int main(void) {
  int five, seven;
  int A, B, C;
  cin >> A >> B >> C;
  five = 0;
  seven = 0;
  if(A == 5) five++;
  if(B == 5) five++;
  if(C == 5) five++;
  if(A == 7) seven++;
  if(B == 7) seven++;
  if(C == 7) seven++;
  if(five == 2 && seven == 1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}

