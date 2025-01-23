import source.test_functions as f

print("##### FORMULE DI OMH #####")
print("--------------------------")

lst_leggi = ("1) Prima legge","2) Seconda legge")

for leggi in lst_leggi:
    print(leggi)

print("--------------------------")

scelta = int(input("Inserisci il numero della legge che ti interessa : "))

if scelta == 1 :
    f.lst_Formule_Prima_Legge()
    calcolo = int(input("Scegli la formula che ti interessa (1/2/3) : "))
    f.calcolo_Prime_leggi(calcolo)
    
elif scelta == 2:
    f.lst_Formule_Seconda_Legge()
    calcolo = int(input("Scegli la formula che ti interessa (1/2/3/4) : "))
    print("Non ho voglia di calcolare la resistività")
    
else:
    print("Il valore inserito non è corretto.")
    
print("--------------------------")
