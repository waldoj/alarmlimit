#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main (int argc, char **argv)
{
 if (argc < 3) {
   fprintf (stderr, "Usage: %s maxtime command [arguments]\n", *argv);
   return 1;
 }
 alarm (atoi (*++argv));
 ++argv;
 if (execvp (*argv, argv) != 0) {
   perror ("execvp");
   return errno;
 }
 return 0;
}
