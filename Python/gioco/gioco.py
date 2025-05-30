import random

class BaseGioco:
    def __init__(self, parole):
        self.parole = parole
    def scegli(self):
        return random.choice(self.parole)

class IndovinaParola(BaseGioco):
    def __init__(self, parole, tentativi=3):
        super().__init__(parole)
        self.parola = self.scegli()
        self.mostra = ["_"] * len(self.parola)
        self.rimasti = tentativi

    def tentativo(self, lettera):
        if lettera in self.parola:
            for i, l in enumerate(self.parola):
                if l == lettera:
                    self.mostra[i] = lettera
            return "_" not in self.mostra
        else:
            self.rimasti -= 1
            return False

def gioca():
    parole_possibili = ["sole", "luna", "stella"]
    gioco = IndovinaParola(parole_possibili)
    print("Indovina la parola:", " ".join(gioco.mostra))
    while gioco.rimasti > 0 and "_" in gioco.mostra:
        indovina = input("Prova una lettera: ").lower()
        if gioco.tentativo(indovina):
            print("Hai vinto!", gioco.parola)
            return
        else:
            print("Parola:", " ".join(gioco.mostra), f"Tentativi: {gioco.rimasti}")
    if "_" in gioco.mostra:
        print("Hai perso! La parola era:", gioco.parola)

if __name__ == "__main__":
    gioca()