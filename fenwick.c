#include <stdio.h>

#define LSO(x) ((x)&(-(x)))

int t[100010];
int tn;

void build(int n) {
	int i;
	tn = n+1;
	for(i = 0; i < tn; i++)
		t[i] = 0;
}

int sq(int i) {
	int sum = 0;
	for(; i; i -= LSO(i))
		sum += t[i];
	return sum;
}

int rsq(int i, int j) {
	return sq(j) - sq(i-1);
}

void adjust(int i, int v) {
	for(; i < tn; i += LSO(i))
		t[i] += v;
}

int main() {
	return 0;
}
