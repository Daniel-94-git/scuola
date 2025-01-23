def lst_Formule_Prima_Legge():
    
    lst_lista__leggi = ("1) V = R * I","2) R = V / I","3) I = V / R")
    
    for leggi in lst_lista__leggi:
        print(leggi)
    print("--------------------------")    
        
def lst_Formule_Seconda_Legge():
    
    lst_lista__leggi2 = ("1) R = ρ * (L / A)","2) ρ = R * A / L","3) L = R * A / ρ","4) A = R * L / ρ ")
    
    for leggi in lst_lista__leggi2:
        print(leggi)
    print("--------------------------")
        
def calcolo_Prime_leggi(calcolo):
    
    match calcolo:
        case 1:
            r = float(input("Inserisci il valore di resistenza : "))
            i = float(input("Inserisci il valore di corrente : "))
            v = tensione(r,i)
            print(f"Il valore della tensione : {v}")
            
        case 2:
            v = float(input("Inserisci il valore di tensione : "))
            i = float(input("Inserisci il valore di corrente : "))
            r = resistenza(v,i)
            print(f"Il valore della resistenza : {r}")
            
        case 3:
            v = float(input("Inserisci il valore di tensione : "))
            r = float(input("Inserisci il valore di resistenza : "))
            i = corrente(v,r)
            print(f"Il valore della tensione : {i}")
        case _ :
            print("Il valore inserito non è corretto.")
            

def tensione(r,i):
    
    v =r*i
    
    return v
    
def resistenza(v,i):
    if i != 0:
        r= v/i
    else:
        print("Non è possibile dividere per zero")
    
    return r
    
    
def corrente(v,r):
    if r != 0:
        i = v/r
    else:
        print("Non è possibile dividere per zero")
    
    return  i
    