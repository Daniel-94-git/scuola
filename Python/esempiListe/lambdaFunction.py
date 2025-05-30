# LAMBDA FUNTIONS E FUNZIONI MAP E FILTER

numeri = [1, 2, 3, 4, 5]
risultati = map(lambda x: x + 10, numeri)
quadrato = map(lambda x : x * x , numeri)
print(list(risultati)) 
print(list(quadrato))

# FILTER CON STRINGHE

parole = ["mela", "banana", "albero", "pera", "arancia"]
risultati = filter(lambda s: s.startswith("a"), parole)
print(list(risultati))  # Output: ['mela', 'albero', 'arancia']

# FILTER CON NUMERI

listaNumeri = [1,2,3,4,5,6,7,8,9,10]
numeriPari = filter(lambda x : x %2 == 0,listaNumeri)
numeriDispari = filter(lambda x : x %2 != 0,listaNumeri)
print(list(numeriPari))
print(list(numeriDispari))

print("############ SOMMA LISTA ##############")
listaNumeri2 = [1,2,3,4,5,6,7,8,9]
sommaLista = map(lambda x: x+5,listaNumeri2)
print(list(sommaLista))

# MAP PER UNIRE DUE LISTE

lista1 = ['a', 'b', 'c']
lista2 = ['1', '2', '3']

lista_unita = list(map(lambda x, y: x + y, lista1, lista2))
print(lista_unita)  # Output: ['a1', 'b2', 'c3']

# MAP PER SOMMARE DUE LISTE

listaUNO = [1,3,5,7,9]
listaDUE = [2,4,6,8,2]

listaSommata = list(map(lambda x, y : x+ y,listaUNO,listaDUE))
print(listaSommata)



listaSpesa = ["pere","mele","banane","ciliege"]
grande = list(map(lambda frutta : frutta.upper(),listaSpesa)) 
print(grande)

piccolo = list(map(lambda frutta : frutta.lower(),grande))
print(piccolo)


# La lista di numeri
numeri = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Usiamo filter con una lambda function per ottenere i numeri pari
# La lambda function: `lambda x: x % 2 == 0`
# - `x` è l'elemento corrente della lista che filter sta esaminando.
# - `x % 2 == 0` è la condizione: ritorna True se x è pari, False altrimenti.
numeri_pari = list(filter(lambda x: x % 2 == 0, numeri))

# Stampiamo il risultato
print(f"La lista originale: {numeri}")
print(f"I numeri pari (filtrati): {numeri_pari}")



listaNumeri3 = [ 10,20,30,40,50,60,70,80]
divisionePerDue = map(lambda x: x/2,listaNumeri3)
print(list(divisionePerDue))