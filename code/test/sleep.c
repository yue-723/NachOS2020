#include "syscall.h"
main() {
	int i;
	for ( i = 0;i < 15;i++) {
		Sleep(1000000);
		PrintInt(i);
	}
	return 0;
}
