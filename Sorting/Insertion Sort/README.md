# Insertion Sort



## Idea

Procediamo **per induzione**.

**Passo base**: riduciamo l'array di *n* a un array di *un elemento* (partendo da sinistra), questo array si può considerare ordinato.

**Passo induttivo**: procediamo a inserire nell'array l'n-esimo elemento scambiando di posto nell'array ordinato finché non troviamo un elemento minore, a questo punto possiamo procedere all'elemento successivo.

## Codice

```c++
// Algoritmo
void i_insertion_sort(int n, int A[]){ 			
  for (int j = 1; j < n; j++) {
    for(int i = j; i > 0; i--){
      if(A[i] >= A[i-1]) {
        break;
      } else {
        swap(A[i], A[i-1]);
      }
    }
  }
}

```

## Analisi

$c_1 = n-1$

$c_2 = n-2$

$c_3 = \sum_{i=1}^n i$

$c_4 = n$

$c_5 + c_6 =  \sum_{i=1}^n (i-1)$

Abbiamo i seguenti casi:

## DA RIFARE

####Array ordinato (caso migliore)

Usciamo sempre al al primo *if*. Quindi *i* è costante e di valore 1.

$T(insertionsort) = c_1 n + c_2 n + c_3 \sum_{i=1}^j 1 + c_5 \sum_{i=1}^j (1-1) + c_4 n$

$T(insertionsort) = n (c_1+ c_2 + c_3 + c_5) + c_4 0$

$T(insertionsort) = n c$

$T(insertionsort) = \theta(n)$

####Array inversamente ordinato (caso peggiore)

Non usciamo mai all'*if*. Quindi la sommatoria è da 1 a n (in questo caso c5 è 0).

$T(insertionsort) = c_1 n + c_2 n + c_3 \sum_{i=1}^n i + c_4 \sum_{i=1}^n (i-1) + c_5 0$

$T(insertionsort) = c_1 n + c_2 n + c_3 \frac{n(n+1)}{2} + c_4 ( \frac{n(n+1)}{2} - n ) + c_5 0$

$T(insertionsort) = n (c_1+ c_2 + \frac{c_3}{2} +  - \frac{c_4}{2}) + n^2(\frac{c_3}{2} + \frac{c_4}{2})$

$T(insertionsort) = n^2c_m + n c_n$

$T(insertionsort) = \theta (n^2)$

####Array in ordine casuale (caso medio)

In questo caso approssimiamo il ciclo interno a metà delle esecuzioni, in particolare la sommatoria viene divisa per due. Il costo asintotico però non muta poiché il termine massimo è in ogni modo $n^2​$.

$T(insertionsort) = \theta(n^2)$
