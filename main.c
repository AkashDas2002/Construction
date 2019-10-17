#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct foo {int a; char *s;};

char * outputStat(struct foo example) {
  char str[175];
  sprintf(str, "%s averaged %d points per game", example.s, example.a);
  return str;
}

struct foo generateExample() {
  struct foo player;
  srand(time(NULL));
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

void modify(struct foo *example, int new_a) {
    (*example).a = new_a;
}

int main() {
  struct foo player0;
  struct foo player1;
  player0.a = 27;
  player0.s = "LeBron James";
  player1.a = 25;
  player1.s = "Kobe Bryant";
  printf("%s\n",outputStat(player0));
  printf("%s\n\n",outputStat(player1));

  struct foo newPlayer = generateExample();

  printf("The random player generated is...\n");
  printf("%s\n\n",outputStat(newPlayer));

  struct foo player2;
  player2.a = 27;
  player2.s = "Kareem Abdul Jabbar";
  printf("%s\n", outputStat(player2));
  printf("He then had a fantastic season with the Bucks! Now ...\n");
  modify(&player2, 30);
  printf("%s\n", outputStat(player2));


  return 0;
}
