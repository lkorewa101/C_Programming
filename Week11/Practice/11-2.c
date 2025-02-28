#include <stdio.h>
enum Month {
  Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec, MonthCount
};
int main(void) {
  int i = 1;
  for(i = Jan; i < MonthCount; i++)printf("%d ", i);
  return 0;
}