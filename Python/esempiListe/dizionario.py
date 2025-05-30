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
    
def processa_config(configurazione):
    print(f"Modalità: {configurazione['mode']}")
    print(f"Timeout: {configurazione['timeout']} secondi")
    if 'debug' in configurazione:
        print(f"Debug abilitato: {configurazione['debug']}")

mia_config = {
    'mode': 'production',
    'timeout': 60,
    'debug': False
}
processa_config(mia_config)

# Output:
# Modalità: production
# Timeout: 60 secondi
# Debug abilitato: False

def info_personale(dati):
    print(f"Nome: {dati[0]}")
    print(f"Età: {dati[1]}")
    print(f"Città: {dati[2]}")

mia_tupla = ("Alice", 25, "Roma")
info_personale(mia_tupla)

# Output:
# Nome: Alice
# Età: 25
# Città: Roma