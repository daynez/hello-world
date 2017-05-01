#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <ctime>

#include "flash.h"

using namespace std;

int main() {

  string enters = "y";
  int srand(time(NULL));

  cout << enters << endl;

  while(!enters.compare("y")) {
    int rnum1 = rand()%12+1;
    int rnum2 = rand()%12+1;
    int t;
    int bingo;

    bingo = rnum1 * rnum2;

    printf("%d times %d equals? ", rnum1, rnum2);

    while(enters.compare("q")) {
      getline(cin, enters);
      if(bingo == (t = atoi(enters.c_str()))) {
        cout << "Congratulations! ";
        enters = 'q';
      }  else {
        printf("Sorry, try again ");
      }
    }
  printf("Try another?  ");
  getline(cin, enters);
  cout << enters << endl;
  }
}
