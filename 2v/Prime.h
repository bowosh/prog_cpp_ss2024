// Eine Header-Datei kann eine andere Header-Datei "includen"
// Bei komplexerem Codeist das sogar die Regel
// Dabei muss man einen "Zylus" verhindern, zum Beispiel
//  - xxx.h "included" yyy.h
//  - yyy.h "included" zzz.h
//  - zzz.h "included" xxx.h
//  Man muss verhindern, dass man xxx.h nochmal liest,
//  sons geht es immer so weiter.

#ifndef _HOME_USER_DD_CCPPPROGRAMMING_PROGRAMMIERENINCPPFREIBURG_2V_PRIME_H_
#define _HOME_USER_DD_CCPPPROGRAMMING_PROGRAMMIERENINCPPFREIBURG_2V_PRIME_H_

// Check if the given number is prime:
bool checkIfPrime(int n, bool verbose = false);
void printbullshit();

#endif  // _HOME_USER_DD_CCPPPROGRAMMING_PROGRAMMIERENINCPPFREIBURG_2V_PRIME_H_
