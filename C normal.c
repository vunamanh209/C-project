#include <stdio.h>
#include <stdlib.h>

/* Viet ra 1 bai toan liet ke tu 1 den 100 ma chia het cho 3 */

int main(int argc, char *argv[]) {
	int i, start, end;
	
	start = 1;
    end = 100;

for(i = start; i <= end; i++) {
  if (i % 3 == 0) {

  printf("%d\n", i);}

}
	return 0;
}
