# Índice

## Segment Tree Classic 
Funcao que combina valores da arvore
int comb(int a, int b)

Cria uma nova arvore a partir do array v[] de n elementos [0,n)
```c
void build(int v[], int n)
```

Altera o valor do array base na posicao [i] para v
```c
void update(int i, int v)
```

Consulta no intervalo entre [l,r)
```c
int query(int l, int r)
```

## Fenwick
Constroi a nova arvore para ate n elementos [1,n]
```c
void build(int n)
```

Soma das frequencias ate o indice [i]
```c
int sq(int i)
```

Soma das frequencias no interval [i,j]
```c
int rsq(int i, int j)
```

Acumula o valor de v no indice [i]
```c
void adjust(int i, int v)
```

## Fenwick (range update and queries)

Constroi a nova arvore para ate n elementos [1,n]
```c
void build(int n)
```

Acumula o valor de v na posicao [k] da arvore t[]
```c
void _update(int t[], int k, int v)
```

Soma das frequencias ate [k] da arvore t[]
```c
int _sq(int t[], int k)
```

Acumula o valor de v a todos os indices no intervalo [i,j]
```c
void update(int i, int j, int v)
```

Soma das frequencias ate o indice [i]
```c
int sq(int i)
```

Soma das frequencias no intervalo [i,j]
```c
int rsq(int i, int j)
```

## Fenwick 2d
Constroi arvore 2d de dimensoes n x n
```c
void build(int n)
```

Soma das frequencias na area [(0,0), (i,j)]
```c
int sq(int i, int j)
```

Soma das frequencias na area [(i1, j1), (i2, j2)]
```c
int rsq(int i1, int j1, int i2, int j2)
```

Acumula o valor de v na posicao (i,j)
```c
void adjust(int i, int j, int v)
```

### Referências
https://github.com/stevenhalim/cpbook-code/tree/master/ch2/ourown
http://codeforces.com/blog/entry/18051
