#include "../base.h"

void BaseProject::proses(){
  for(int i = 1; i <= jumlahmhs; i++){
    for(int j = 1; j <= jumlahmtkl; j++){
      akhir[j] = (tugas[j] * 0.2) + (uts[j] * 0.35) + (uas[j] * 0.45);
    }
    for(int j = 1; j <= jumlahmtkl; j++){
      totaltugas += tugas[j];
      totaluts += uts[j];
      totaluas += uas[j];
      totalakhir += akhir[j];
    }
    rata1 = totaltugas / jumlahmtkl;
    rata2 = totaluts / jumlahmtkl;
    rata3 = totaluas / jumlahmtkl;
    rata4 = totalakhir / jumlahmtkl;
  }
}

int main(){
  BaseProject base;
  base.proses();
  return 0; 
}