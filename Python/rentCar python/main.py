import pytest
import functions as f


while True:
    
    marcheInSede = {"AUDI": 5,"BMW":8,"MERCEDES":10,"TESLA":15}
    motor_AUDI = {"BENZINA":7,"DIESEL":9,"IBRIDA":10,"ELETTRICA":13}
    motor_BMW = {"BENZINA":7,"DIESEL":9,"ELETTRICA":13}
    motor_MERCEDES = {"BENZINA":7,"DIESEL":9,"IBRIDA":10}
    motor_TESLA = {"ELETTRICA":13}
    selezioneCliente =[]
    costoFissoKm = 50
    
    
    
    
    
    ## LOGIN/ VISITATORE/ ESCI
    selezioneMenuPrincipale = f.menu()

    # VERIFICA LOGIN
    if selezioneMenuPrincipale == "login":
        accesso = f.login()
        
        # CONDIZIONE LOGIN TRUE
        if accesso:
            
            selezioneMenuLoggato = f.menuDaLoggato()
            
            # PRASSI NOLEGGIO MACCHINA 
            if selezioneMenuLoggato == "noleggia auto":
                
                marcaScelta = f.marcheDisponibili(marcheInSede)
                
                # SELEZIONE MARCA DALLA LISTA
                if marcaScelta in marcheInSede:
                    selezioneCliente.append(marcaScelta)
                    
                    # SCELTA MOTORIZZAZIONE
                    motorizzazioneScelta = f.motorizzazioniDisponibili(marcaScelta,motor_AUDI,motor_BMW,motor_MERCEDES,motor_TESLA)
                    
                    # USCITA DAL PROGRAMMA
                    if motorizzazioneScelta == "0":
                        print("Alla prossima volta!")
                        break
                    # AGGIUNGO LA MOTORIZZAZIONE SCELTA ALLA LISTA SELEZIONE CLIENTE , RACCOLGO I KM E I GIORNI DI NOLEGGIO
                    else:
                        selezioneCliente.append(motorizzazioneScelta)
                        kmNoleggiati = f.kmDaPercorrere(costoFissoKm)
                        selezioneCliente.append(kmNoleggiati)
                        giorniNoleggio = f.giorniNoleggio()
                        selezioneCliente.append(giorniNoleggio)
                        calcoloNoleggio = f.calcoloNoleggio(costoFissoKm,selezioneCliente,marcheInSede,motor_AUDI,motor_BMW,motor_MERCEDES,motor_TESLA)
                        print(f"Il costo del noleggio è di {calcoloNoleggio} euro")
                    
                # USCITA DAL PROGRAMMA    
                elif marcaScelta == "0":
                    print("Alla prossima volta!")
                    break
            
            # PRASSI CONCLUSIONE NOLEGGIO    
            elif selezioneMenuLoggato == "concludi noleggio":
                marcaScelta = f.marcheDisponibili(marcheInSede)
                selezioneCliente.append(marcaScelta)
                motorizzazioneScelta = f.motorizzazioniDisponibili(marcaScelta,motor_AUDI,motor_BMW,motor_MERCEDES,motor_TESLA)
                selezioneCliente.append(motorizzazioneScelta)
                kmNoleggiati = f.kmDaPercorrere(costoFissoKm)
                selezioneCliente.append(kmNoleggiati)
                giorniNoleggio = f.giorniNoleggio()
                selezioneCliente.append(giorniNoleggio)
                calcoloNoleggio = f.calcoloNoleggio(costoFissoKm,selezioneCliente,marcheInSede,motor_AUDI,motor_BMW,motor_MERCEDES,motor_TESLA)
                print(f"Il costo del noleggio è di {calcoloNoleggio} euro")
            
            
            
            # USCITA DAL PROGRAMMA
            elif selezioneMenuLoggato == "esci":
                print("Alla prossima volta!")
                accesso = False
                break
        
        #CONDIZIONE LOGIN FALSE
        elif accesso == False:
            print("Alla prossima volta!")
            break
    
    elif selezioneMenuPrincipale == "visitatore":
        
        f.mostraCatalogo(marcheInSede,motor_AUDI,motor_BMW,motor_MERCEDES,motor_TESLA)
    
            
    elif selezioneMenuPrincipale == "esci":
            print("Alla prossima volta!")
            break
        
        