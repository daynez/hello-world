#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <ctime>

#include "flash.h"

using namespace std;

int main() {

  int enters = 'y';
  int srand(time(NULL));

  while(enters == 'y') {
    int rnum1 = rand()%12+1;
    int rnum2 = rand()%12+1;

    int bingo;

    bingo = rnum1 * rnum2;

    cout << rnum1 << " times " << rnum2 << " equals?";

    while(enters != 'q') {
      cin >> enters;
      if(enters == bingo) {
        cout << "Congratulations! ";
        enters = 'q';
      }  else {
        cout << "Sorry, try again ";
      }
    }
  cout << "Try another?";
  cin >> enters;
  }
}
