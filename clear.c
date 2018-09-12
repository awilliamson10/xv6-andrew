#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  write(1, "\33[H\33[2J", 7);

  exit();
}
