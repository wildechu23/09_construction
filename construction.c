#include <stdio.h>
#include <stdlib.h>

struct profile {
	char name[16];
	int wins;
	int losses;
};

void print_profile(struct profile *p) {
	printf("%s has %d wins and %d losses.", p->name, p->wins,p->losses);
}

struct profile * make_profile(char *nm, int w, int l) {
	
}

int main() {

	return 0;
}
