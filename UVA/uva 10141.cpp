#include <stdio.h>

int main() {
  int k, m;
  while (scanf("%d", &k) && k) {
    scanf("%d", &m);
    int take[10000] = {};
    while (k--) {
      int id;
      scanf("%d", &id);
      take[id] = 1;
    }
    int fail = 0;
    while (m--) {
      int num, need, taken = 0;
      scanf("%d%d", &num, &need);
      while (num--) {
        int id;
        scanf("%d", &id);
        if (take[id]) {
          taken++;
        }
      }
      if (taken < need) fail = 1;
    }
    puts(fail ? "no" : "yes");
  }
  return 0;
}
