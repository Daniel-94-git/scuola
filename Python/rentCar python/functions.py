# FUNZIONI MENU E LOGIN


# menu principale rentCar qui ci si logga , si entra da visistatori o si esce dal proogramma
def menu():
    
    vociMenu = {"LOGIN","VISITATORE","ESCI"}
    
    print("#########################################################")
    print("#################### MENU PRINCIPALE ####################")
    print("#########################################################")
    print("\n")
    
    for voce in vociMenu:
        
        print("- ",voce)
        
    selezione = (input("Scrivi la voce che ti interessa : "))
    selezioneMenu = selezione.lower() 
    
    return selezioneMenu

# login utente hardcoded , esercitarsi su controlli e while
def login():
    
    accesso = False
    
    print("#########################################################")
    print("##################### LOGIN UTENTE ######################")
    print("#########################################################")
    print("\n")
    
    print("Nome utente = pippo / password = pluto")
    
    while True:
        
        nomeUtente = input("Inserisci il tuo nome utente : ").lower()
        pasword = input("Inserisci la tua password : ").lower()
        
        if nomeUtente != "pippo" or pasword != "pluto":
            
            esci =input("Nome utente o password inseriti non corretti , premi 0 per uscire, 1 per continuare.")
            
            if esci == "0":
                accesso = False
                break
                
        elif nomeUtente == "pippo" and pasword == "pluto":
            print(f"Bentornato {nomeUtente}")
            accesso = True
            break

    return accesso

# visualizza menu da loggato
def menuDaLoggato():
    
    print("#########################################################")
    print("###################### MENU UTENTE  #####################")
    print("#########################################################")
    print("\n")
    
    menuLoggato = {"NOLEGGIA AUTO","CONCLUDI NOLEGGIO","ESCI"}
    
    while True:
        
        for voce in menuLoggato:
            print("- ",voce)
        
        selezioneMenu = input("Scrivi l'azione che desideri eseguire : ").lower()

        if selezioneMenu == "noleggia auto" or selezioneMenu == "concludi noleggio" or selezioneMenu == "esci":
            
            if selezioneMenu == "noleggia auto":
                break
            
            elif selezioneMenu == "concludi noleggio":
                break
            
            elif selezioneMenu == "esci":
                break
        else:
            print("Selezione non valida")    
            
            
    return selezioneMenu


# FUNZIONI PER IL NOLEGGIO DI UNA VETTURA


# visualizza e ritorna la marca scelta dal cliente fra quelle disponibili
def marcheDisponibili(marcheInSede):
    
    print("#########################################################")
    print("################### MARCHE DISPONIBILI ##################")
    print("#########################################################")
    print("\n")
    
    while True:
        
        for marca,prezzo in marcheInSede.items():
            print(f"- {marca}\t ->\t costo al giorno : {prezzo} euro al giorno")
            
        selezioneMarca = input("Scrivi la marca che hai scelto, oppure 0 per uscire:").upper()
        
        if selezioneMarca in marcheInSede:
            print(f"Hai scelto : {selezioneMarca}")
            break
        
        elif selezioneMarca == "0":
            break
        
        else:
            print("Selezione non valida.")
            
    return selezioneMarca

# visualizza e ritorna la motorizzazione scelta dal cliente fra quelle disponibili
def motorizzazioniDisponibili(marcaScelta,motor_AUDI,motor_BMW,motor_MERCEDES,motor_TESLA):
    
    print("#########################################################")
    print("#################### MOTORIZZAZIONI #####################")
    print("#########################################################")
    print("\n")
    
    while True:
        
        print(f"Motorizzazioni disponibili {marcaScelta}: ")
        
        if marcaScelta == "AUDI":
            
            for motorizzazione,prezzo in motor_AUDI.items():
                print(f"Motorizzazione:\t{motorizzazione}\tprezzo: {prezzo} euro al giorno")
        
        if marcaScelta == "BMW":
            
            for motorizzazione,prezzo in motor_BMW.items():
                print(f"Motorizzazione:\t {motorizzazione}\tprezzo: {prezzo} euro al giorno")
            
        if marcaScelta == "MERCEDES":
            
            for motorizzazione,prezzo in motor_MERCEDES.items():
                print(f"Motorizzazione:\t {motorizzazione}\tprezzo: {prezzo} euro al giorno")
        
        if marcaScelta == "TESLA":
            
            for motorizzazione,prezzo in motor_TESLA.items():
                print(f"Motorizzazione:\t {motorizzazione}\tprezzo: {prezzo} euro al giorno")
        
        motorizzazioneScelta = input("Scrivi la motorizzazione che hai scelto, oppure 0 per uscire: ").upper()
        
        if motorizzazioneScelta in motor_AUDI or motorizzazioneScelta in motor_BMW or motorizzazioneScelta in motor_MERCEDES or motorizzazioneScelta in motor_TESLA:
            
            print(f"Hai scelto {motorizzazioneScelta}")
            break
        
        elif motorizzazioneScelta == "0":
            break
        
        else:
            print("Selezione non valida.")
            
    return motorizzazioneScelta

# raccoglie e ritorna i km che il cliente pensa di percorrere
def kmDaPercorrere(costoFissoKm):
    
    km = 0
    costoFissoKm = 50
    
    print("#########################################################")
    print("#################### KILOMETRAGGIO #####################")
    print("#########################################################")
    print("\n")
    
    
    while True:
        try:
            print(f"Fino a 300 km il costo del noleggio è fisso a {costoFissoKm} euro,\nsopra questa soglia ogni km costa 0,25 centesimi.")
            km =float (input("Inserisci i km: "))
        
            if km <= 0:
                print("I km devono essere superiori a zero.")
        
            elif km > 1:
                print(f"Hai deciso che perorrerai circa {km} km")
                break
            
        except:
            print("Il carattere che hai inserito non è valido.")
            
    return km

# raccoglie e ritorna i giorni che il cliente pensa di noleggiare la macchina
def giorniNoleggio():
    
    print("#########################################################")
    print("################## GIORNI DI NOLEGGIO ###################")
    print("#########################################################")
    print("\n")
    
    while True:
        
        try:
            giorniNoleggio = int(input("Per quanti giorni il noleggio del veicolo: "))
        
            if giorniNoleggio <= 0:
                print("Il noleggio deve essere di almeno un giorno.")
            
            elif giorniNoleggio >= 1:
                break
        except:
            
            print("Il carattere inserito non è valido, riprova.")
            
    return giorniNoleggio

# restituisce il costo totale del noleggio
def calcoloNoleggio(costoFissoKm,selezioneCliente,marcheInSede,motor_AUDI,motor_BMW,motor_MERCEDES,motor_TESLA):
    
    costoMarca = 0
    
    print("#########################################################")
    print("################# CALCOLO DEL NOLEGGIO ##################")
    print("#########################################################")
    print("\n")
    
    for dati in selezioneCliente:
        
        print(f"Hai scelto : {dati}")
    
        
    marcaDacercare = selezioneCliente[0]
    
    if marcaDacercare in selezioneCliente:
        
        if marcaDacercare in marcheInSede:
            
            costoMarca = marcheInSede[marcaDacercare]
    
    motorizzazioneDaCercare = selezioneCliente[1]
    
    if motorizzazioneDaCercare in selezioneCliente:
        
        if motorizzazioneDaCercare in motor_AUDI or motor_BMW or motor_MERCEDES or motor_TESLA:
            
            costoMotorizzaione = motor_AUDI[motorizzazioneDaCercare]# or motor_BMW[motorizzazioneDaCercare] or motor_MERCEDES[motorizzazioneDaCercare] or motor_TESLA[motorizzazioneDaCercare]
    
    km = selezioneCliente[2]
    tempoNoleggio = selezioneCliente[3]
    print(tempoNoleggio)
    
    
    if km <= 300:
        
        costoNoleggio = (costoMarca + costoMotorizzaione)*tempoNoleggio + costoFissoKm

        
    elif km > 300:
        
        costoKm = (km- 300)*0.25
        costoNoleggio = ((costoMarca + costoMotorizzaione)*tempoNoleggio) + costoKm
        
        
            

    return costoNoleggio


# QUI CI SONO LE FUNZIONI PER LA SEZIONE DI VISITATORE


def mostraCatalogo(marcheInSede,motor_AUDI,motor_BMW,motor_MERCEDES,motor_TESLA):
    
    print("#########################################################")
    print("######################## CATALOGO #######################")
    print("#########################################################")
    print("\n")
    
    for marca,prezzo in marcheInSede.items():
            
            marcaDaCiclare = marca
            
            print(f"- {marca}\t\t ->\t costo del modello al giorno : {prezzo} euro ")
            print("MOTORIZZAZIONI:")
            
            if marcaDaCiclare == "AUDI":
                for motorizzazione,prezzo in motor_AUDI.items():
                    print(f"- {motorizzazione}\t ->\t costo della motorizzaione al giorno : {prezzo} euro ")

            if marcaDaCiclare == "BMW":
                for motorizzazione,prezzo in motor_BMW.items():
                    print(f"- {motorizzazione}\t ->\t costo della motorizzaione al giorno : {prezzo} euro ")

            if marcaDaCiclare == "MERCEDES":
                for motorizzazione,prezzo in motor_MERCEDES.items():
                    print(f"- {motorizzazione}\t ->\t costo della motorizzaione al giorno : {prezzo} euro ")

            if marcaDaCiclare == "TESLA":
                for motorizzazione,prezzo in motor_TESLA.items():
                    print(f"- {motorizzazione}\t ->\t costo della motorizzaione al giorno : {prezzo} euro ")
            print("\n")