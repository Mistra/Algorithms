# Merge Sort



## Idea

L'algoritmo è ricorsivo, di tipo *divide et impera*, non *in place*.

#### Divide

Valutiamo la lista inserita, se la lunghezza *n* è maggiore di 1, procediamo a dividerla in *head* e *tail*, applichiamo quindi ricorsivamente mergesort alle due liste ottenute.

#### Impera

Ordiniamo le liste ridotte ai minimi termini, piuttosto facile dato che sono liste di 1 elemento ciascuna.

#### Combina

Fondiamo le due sottoliste, ora ordinate, in una nuova lista confrontando i primi due elementi e inserendo il minore dei due nella lista nuova. Il procedimento di ripete finché una delle due sottoliste si esaurisce, quindi il resto della sottolista restante viene inserito.

$$
\begin{equation}
T(n)
   \begin{cases}
   2, n = 2
   \\2T(n/2) + n, n > 2
   \end{cases}
\end{equation}
$$
