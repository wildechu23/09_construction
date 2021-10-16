#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct profile {
	char name[16];
	int wins;
	int losses;
};

void print_profile(struct profile *p) {
	printf("%s has %d wins and %d losses.\n", p->name, p->wins,p->losses);
}

struct profile * make_profile(char *nm, int sz, int w, int l) {
	struct profile *n = malloc(sizeof(struct profile));

  	strncpy(n->name, nm, sz);
  	n->wins = w;
	n->losses = l;

  return n;
}

int main() {
	srand(time(NULL));
	int wins = rand()/100000000;
	int losses = rand()/100000000;
	struct profile *bob = make_profile("bob",3,wins,losses);
	print_profile(bob);

	free(bob);
	return 0;
}
