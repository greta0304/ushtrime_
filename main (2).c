#include <stdio.h>

int main() {
  int n;
  printf("Shkruani numrin e hedhjeve te topit: ");
  scanf("%d", &n);

  int piket = 0;
  char gjendja_x1 = 'C', gjendja_x2 = 'C', gjendja_x3 = 'C';

  for (int i = 0; i < n; i++) {
    char porta;
    printf("Hedhja %d: Shkruani porten ku futet topi (A ose B): ", i + 1);
    scanf(" %c", &porta);

    if ((gjendja_x1 == 'C' && gjendja_x3 != 'C') ||
        (gjendja_x1 != 'C' && gjendja_x3 == 'C'))
      gjendja_x1 = (gjendja_x1 == 'C') ? 'D' : 'C';

    if (gjendja_x2 != 'C')
      gjendja_x2 = 'C';

    if (porta == 'D')
      piket++;

    if (porta == 'A' && gjendja_x1 == 'D')
      piket++;
    else if (porta == 'B' && gjendja_x3 == 'D')
      piket++;

    gjendja_x3 = gjendja_x1;
    gjendja_x1 = porta;
  }

  printf("Piket totale: %d\n", piket);

  return 0;
}