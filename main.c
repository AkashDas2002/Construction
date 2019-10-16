#include <stdio.h>
#include <stdlib.h>

struct foo {int a; char *s;};

char * outputStat(struct foo example) {
  char str[175];
  sprintf(str, "%s averaged %d points per game", example.s, example.a);
  return str;
}

struct foo generateExample() {
  struct foo player;
  int n = rand() % 5;
  if (n == 0) {
    player.s = "Michael Jordan";
    player.a = 30;
  }
  if (n == 1) {
    player.s = "Wilt Chamberlain";
    player.a = 30;
  }
  if (n == 2) {
    player.s = "Carmelo Anthony";
    player.a = 24;
  }
  if (n == 3) {
    player.s = "Dwyane Wade";
    player.a = 22;
  }
  if (n == 4) {
    player.s = "Kevin Durant";
    player.a = 27;
  }
  return player;
}

int main() {
  struct foo player0;
  struct foo player1;
  player0.a = 27;
  player0.s = "LeBron James";
  player1.a = 25;
  player1.s = "Kobe Bryant";
  printf("%s\n",outputStat(player0));
  printf("%s\n",outputStat(player1));

  struct foo newPlayer = generateExample();

  printf("%s\n",outputStat(newPlayer));

  return 0;
}
