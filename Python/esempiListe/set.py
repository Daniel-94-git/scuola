# SET PER ELIMINARE DUPLICATI

numeri = {1,2,2,2,3,3,3,3,4,4,4,5,5,5,5}
eliminoDuplicati = set(numeri)
print(eliminoDuplicati)

# SET PER UNIRE LISTE

set1 = {1, 2, 3}
set2 = {3, 4, 5}
unione = set1 | set2
print(unione)  # Output: {1, 2, 3, 4, 5}

# SET PER ELEMENTI IN COMUNE

set1 = {1, 2, 3}
set2 = {3, 4, 5}
intersezione = set1 & set2
print(intersezione)  # Output: {3}

# SET CHE RESTIUTISCE GLI ELEMENTI PRESENTI NEL PRIMO SET CHE NON SONO PRESENTI NEL SECONDO

set1 = {1, 2, 3}
set2 = {3, 4, 5}
differenza = set1 - set2
print(differenza)  # Output: {1, 2}

# SET CHE CONTIENE TUTTI GLI ELEMENTI CHE SONO PRESENTI IN UNO DEI SET MA NON IN ENTRAMBI

set1 = {1, 2, 3}
set2 = {3, 4, 5}
differenza_simmetrica = set1 ^ set2
print(differenza_simmetrica)  # Output: {1, 2, 4, 5}

# SET PER VERIFICARE SE UN ELEMENTO E' PRESENTE IN ALTRA LISTA

frutta = {"mela", "banana", "ciliegia"}
if "banana" in frutta:
    print("La banana è nel set")
else:
    print("La banana non è nel set")