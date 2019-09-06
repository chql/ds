#include <stdio.h>

#define LSO(x) ((x)&(-(x)))

int t[1010][1010];
int tn;

void build(int n) {
	int i, j;
	tn = n+1;
	for(i = 0; i < tn; i++)
		for(j = 0; j < tn ; j++)
			t[i][j] = 0;
}

int sq(int i, int j) {
	int sum = 0;
	int k;
	for(; i; i -= LSO(i))
		for(k = j; k; k -= LSO(k))
			sum += t[i][k];
	return sum;
}

int rsq(int i1, int j1, int i2, int j2) {
	return sq(i2, j2) - ((sq(i2, j1-1) + sq(i1-1, j2)) - sq(i1-1,j1-1));
}

void adjust(int i, int j, int v) {
	int k;
	for(; i < tn; i += LSO(i))
		for(k = j; k < tn; k += LSO(k))
			t[i][k] += v;
}

int main() {
	return 0;
}

