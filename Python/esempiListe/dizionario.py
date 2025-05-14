# esempio di dizionario

# semplice

dizio = {'nome': "Daniel" , 'eta' : 30}

# dizionari che contengono dizionari

dizio2 = {  'Daniel':{'citta' : "carano", 'numeroCivico' : 17},
            'Noemi' :{'citta' : "Masi di Cavalese", 'numeroCivico' : 20}} 


print(dizio2)
print(dizio2['Daniel']['citta']) 
print(dizio2['Noemi']['citta']) 

# aggiungo terza persona al dizioonario dizio2

matteo = {'citta' : "Predazzo", 'numeroCivico' : 22}

dizio2['matteo'] = matteo
print(dizio2)

# rimuovo terza persona

del dizio2['matteo']
print(dizio2)

#stampiamo con ciclo for

for k,v in dizio2.items():
    print(f"Chiave : {k} |||||| Valore {v}" )