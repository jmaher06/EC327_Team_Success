#include <iostream>
#include "Timer.h"

using namespace std;

int main() 
{
  bool quit1 = false;
  bool quit2 = false;
  bool quit3 = false;
  bool quit4 = false;
  char choice;
  timer t;
  while(! quit1) {
    cout << "Timer for Player 1:" << endl;
    cout << " s   start/stop " << endl;
    cout << " r   reset" << endl;
    cout << " v   view time" << endl;
    cout << " q   quit" << endl;
    cout << endl;
    choice = getchar();
    switch(choice) {
      case 's':
        if(t.isRunning()) {
          t.stop();
          cout << "stopped" << endl;
        }
        else {
          t.start();
          cout << "started" << endl;
        }
        break;
      case 'r':
        t.reset();
        cout << "resetted" << endl;
        break;
      case 'v':
        cout << "time = " << t.getTime()/10 << " s" << endl;
        break;
      case 'q':
        quit1 = true;
        break;
    }
    cout << "------------------------------" << endl;
  }
  timer z;
  while(! quit2) {
    cout << "Timer for Player 2:" << endl;
    cout << " s   start/stop " << endl;
    cout << " r   reset" << endl;
    cout << " v   view time" << endl;
    cout << " q   quit" << endl;
    cout << endl;
    choice = getchar();
    switch(choice) {
      case 's':
        if(z.isRunning()) {
          z.stop();
          cout << "stopped" << endl;
        }
        else {
          z.start();
          cout << "started" << endl;
        }
        break;
      case 'r':
        z.reset();
        cout << "resetted" << endl;
        break;
      case 'v':
        cout << "time = " << z.getTime()/10 << " s" << endl;
        break;
      case 'q':
        quit2 = true;
        break;
    }
    cout << "------------------------------" << endl;
  }
  while(! quit3) {
    cout << "Timer for Player 1:" << endl;
    cout << " s   start/stop " << endl;
    cout << " r   reset" << endl;
    cout << " v   view time" << endl;
    cout << " q   quit" << endl;
    cout << endl;
    choice = getchar();
    switch(choice) {
      case 's':
        if(t.isRunning()) {
          t.stop();
          cout << "stopped" << endl;
        }
        else {
          t.start();
          cout << "started" << endl;
        }
        break;
      case 'r':
        t.reset();
        cout << "resetted" << endl;
        break;
      case 'v':
        cout << "time = " << t.getTime()/10 << " s" << endl;
        break;
      case 'q':
        quit3 = true;
        break;
    }
    cout << "------------------------------" << endl;
  }
  while(! quit4) {
    cout << "Timer for Player 2:" << endl;
    cout << " s   start/stop " << endl;
    cout << " r   reset" << endl;
    cout << " v   view time" << endl;
    cout << " q   quit" << endl;
    cout << endl;
    choice = getchar();
    switch(choice) {
      case 's':
        if(z.isRunning()) {
          z.stop();
          cout << "stopped" << endl;
        }
        else {
          z.start();
          cout << "started" << endl;
        }
        break;
      case 'r':
        z.reset();
        cout << "resetted" << endl;
        break;
      case 'v':
        cout << "time = " << z.getTime()/10 << " s" << endl;
        break;
      case 'q':
        quit4 = true;
        break;
    }
    cout << "------------------------------" << endl;
  }
  return 0;
}