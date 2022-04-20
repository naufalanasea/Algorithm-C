#include "../base.h"

void BaseProject::proses(){
  hitung(jumlah);
  bayar = total * 120000;
};

void BaseProject::hitung(int n){
  if (n == 0){
	}
		else{
		total += sks[n];
		hitung (n - 1);
  }
}

int main(){
  BaseProject base;
  base.proses();
  return 0;
}
