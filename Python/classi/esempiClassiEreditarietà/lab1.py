## creo classe semplice con sottoclasse

#SUPERCLASSE

class PersonaAdulta :
    def __init__(self,eta,sesso,peso):
        self.eta = eta
        self.sesso = sesso
        self.peso = peso
        
    def descrizione(self):
        return f"eta : {self.eta} , sesso : {self.sesso} , peso : {self.peso}"
    

# SOTTOCLASSE

class Bambino(PersonaAdulta):
    def __init__(self, eta, sesso, peso,corso):
        super().__init__(eta, sesso, peso)
        self.corso = corso
        
    def descrizione(self):
        return super().descrizione(),f"Corso : {self.corso}"
    
Daniel = PersonaAdulta(30,"Maschio",71)
piccolo = Bambino(5,"Maschio",17,"Elementari")

print(Daniel.descrizione())
print(piccolo.descrizione())