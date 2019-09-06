#include <stdio.h>

#define LSO(x) ((x)&(-(x)))

int t1[100010], t2[100010];
int tn;

// constroi a nova arvore para ate n elementos [1,n]
void build(int n) {
	int i;
	tn = n+1;
	for(i = 0; i < tn; i++)
		t1[i] = t2[i] = 0;
}

// acumula o valor de v na posicao [k] da arvore t[]
void _update(int t[], int k, int v) {
	for(; k < tn; k += LSO(k))
		t[k] += v;
}

// soma das frequencias ate [k] da arvore t[]
int _sq(int t[], int k) {
	int sum = 0;
	for(; k > 0; k -= LSO(k))
		sum += t[k];
	return sum;
}

// acumula o valor de v a todos os indices no intervalo [i,j]
void update(int i, int j, int v) {
	_update(t1, i, v);
	_update(t1, j+1, -v);
	_update(t2, i, v*(i-1));
	_update(t2, j+1, -v*j);
}

// soma das frequencias ate o indice [i]
int sq(int i) {
	return _sq(t1, i)*i - _sq(t2, i);
}

// soma das frequencias no intervalo [i,j]
int rsq(int i, int j) {
	return sq(j) - sq(i-1);
}

int main() {
	return 0;
}
