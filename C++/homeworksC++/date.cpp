#include <stdlib.h>

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  try {
    int dd, mm, yy;
    string x, y, z;
    string v = argv[1];

    // valores nao compactos
    if (v[1] != '/' && v[3] != '/') {
      x = v.substr(0, 2);
      y = v.substr(3, 2);
      z = v.substr(6, 4);
    }
    // valor de dd eh compacto
    if (v[1] == '/' && v[3] != '/') {
      x = v.substr(0, 1);
      y = v.substr(2, 2);
      z = v.substr(5, 4);
    }
    // valor de mm eh compacto
    if (v[1] != '/' && v[4] == '/') {
      x = v.substr(0, 2);
      y = v.substr(3, 1);
      z = v.substr(5, 4);
    }
    // valor de dd e mm eh compacto
    if (v[1] == '/' && v[3] == '/') {
      x = v.substr(0, 1);
      y = v.substr(2, 1);
      z = v.substr(4, 4);
    }

    dd = stoi(x);
    mm = stoi(y);
    yy = stoi(z);

    if (yy >= 0001 && yy <= 3000) {
      if (mm >= 1 && mm <= 12) {
        if ((dd >= 1 && dd <= 31) &&
            (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 ||
             mm == 12)) {
          printf("%02d/%02d/%04d\n", dd, mm, yy);
          // cout << dd << "/" << mm << "/" << yy << endl;
        } else if ((dd >= 1 && dd <= 30) &&
                   (mm == 4 || mm == 6 || mm == 9 || mm == 11)) {
          printf("%02d/%02d/%04d\n", dd, mm, yy);
          // cout << dd << "/" << mm << "/" << yy << endl;
        } else if ((dd >= 1 && dd <= 28) && (mm == 2)) {
          printf("%02d/%02d/%04d\n", dd, mm, yy);
          // cout << dd << "/" << mm << "/" << yy << endl;
        } else if (dd == 29 && mm == 2 &&
                   (yy % 400 == 0 || (yy % 4 == 0 && yy % 100 != 0))) {
          printf("%02d/%02d/%04d\n", dd, mm, yy);
          // cout << dd << "/" << mm << "/" << yy << endl;
        } else
          printf("data invalida\n");
      } else {
        printf("data invalida\n");
      }
    } else {
      printf("data invalida\n");
    }
  } catch (...) {
    cout << "Erro de conversao: nao eh uma string numerica inteira valida!"
         << endl;
  }
}