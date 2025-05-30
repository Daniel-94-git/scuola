import random

#creo la classe BaseGioco
class BaseGioco:
    def __init__(self,parole):   # costruttore
        self.parole = parole
    def segli(self):             # funzione segli che ritorna random
        return random.choice(self.parole)
    
# sottoclasse indovinaParole
class IndovinaParole(BaseGioco):
    def __init__(self, parole,tentativi = 3):
        super().__init__(parole)
        self.parola =self.segli()
        self.mostra = ["_"] * len(self.parola)
        self.rimasti = tentativi
        
    def tentativo(self, lettera):
        lettera_trovata = False  # Aggiungiamo un flag per tracciare se la lettera è stata trovata
        if lettera in self.parola:
            for i, l in enumerate(self.parola):
                if l == lettera:
                    self.mostra[i] = lettera
                    lettera_trovata = True
        if not lettera_trovata:
            self.rimasti -= 1
        return "_" not in self.mostra
                
def gioca():
    parolePossibili = ["ciao","voto","pippo"]
    gioco = IndovinaParole(parolePossibili)
    print("Indovina la parola : ", " ".join(gioco.mostra))
    while(gioco.rimasti > 0 and "_" in gioco.mostra):
        indovina =input("Inserisci una lettera : ").lower()
        if gioco.tentativo(indovina):
            print("Hai vinto!",gioco.parola)
            return
        else:
            print("Parola : ", " ".join(gioco.mostra)),f"Tentativi : {gioco.rimasti}"
    if "_" in gioco.parola:
        print("Hai perso! La parola era : ",gioco.parola)

if __name__ == "__main__":
    gioca()