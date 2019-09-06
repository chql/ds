#include <stdio.h>

#define LSO(x) ((x)&(-(x)))

int t1[100010], t2[100010];
int tn;

void build(int n) {
	int i;
	tn = n+1;
	for(i = 0; i < tn; i++)
		t1[i] = t2[i] = 0;
}

void _update(int t[], int k, int v) {
	for(; k < tn; k += LSO(k))
		t[k] += v;
}

int _sq(int t[], int k) {
	int sum = 0;
	for(; k > 0; k -= LSO(k))
		sum += t[k];
	return sum;
}

void update(int i, int j, int v) {
	_update(t1, i, v);
	_update(t1, j+1, -v);
	_update(t2, i, v*(i-1));
	_update(t2, j+1, -v*j);
}

int sq(int i) { return _sq(t1, i)*i - _sq(t2, i); }
int rsq(int i, int j) { return sq(j) - sq(i-1); }

int main() {
	return 0;
}
