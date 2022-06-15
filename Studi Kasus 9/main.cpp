#include <iostream>
#include "header/input.h"
#include "header/proses.h"
#include "header/output.h"

using namespace std;

int main() {
  Input input;
  Proses proses;
  Output output;
  
  int buku[24], rak[6][4];
  int n = sizeof(buku)/sizeof(buku[0]);
  int row = sizeof(rak)/sizeof(rak[0]);
  int column = sizeof(rak[0])/sizeof(rak[0][0]);

  input.inputArr(buku, n);
  proses.sort(buku, n);
  proses.jadiMatriks(buku, rak, row, column);
  output.print(rak, row, column);

  return 0;
}