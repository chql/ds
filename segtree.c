#include <stdio.h>

int t[2*100010];
int tn;

// funcao que combina valores da arvore
int comb(int a, int b) {
	return a + b;
}

// cria uma nova arvore a partir do array v[] de n elementos [0,n)
void build(int v[], int n) {
	int i;
	tn = n;
	for(i = 0; i < tn; i++)
		t[i+n] = v[i];
	for(i = tn-1; i > 0; i--)
		t[i] = comb(t[i<<1], t[i<<1|1]);
}

// altera o valor do array base na posicao [i] para v
void update(int i, int v) {
	for(t[i += tn] = v; i > 1; i >>= 1)
		t[i>>1] = comb(t[i], t[i^1]);
}

// consulta no intervalo entre [l,r)
int query(int l, int r) {
	int res = 0;
	for(l += tn, r += tn; l < r; l >>= 1, r >>= 1) {
		if(l&1) res = comb(res, t[l++]);
		if(r&1) res = comb(res, t[--r]);
	}
	return res;
}

int main() {
	return 0;
}
