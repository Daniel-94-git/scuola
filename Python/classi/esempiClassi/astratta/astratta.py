from abc import ABC, abstractmethod

# Definisci la classe astratta 'Veicolo'
class Veicolo(ABC):
    @abstractmethod
    def parti(self):
        # Questo metodo deve essere implementato dalle sottoclassi
        pass

    @abstractmethod
    def fermati(self):
        # Anche questo metodo deve essere implementato
        pass

    def descrivi(self):
        # Questo è un metodo concreto, può avere un'implementazione di default
        print("Questo è un tipo di veicolo.")

# --- Sottoclassi Concrete ---

class Automobile(Veicolo):
    def parti(self):
        print("L'automobile si accende e parte.")

    def fermati(self):
        print("L'automobile frena e si ferma.")

class Bicicletta(Veicolo):
    def parti(self):
        print("La bicicletta inizia a pedalare.")

    def fermati(self):
        print("La bicicletta smette di pedalare e si ferma.")

# --- Esempio di Utilizzo ---

# Tentare di creare un'istanza di Veicolo darà un errore!
# veicolo_generico = Veicolo() # Questo genererebbe un TypeError

mia_auto = Automobile()
mia_auto.parti()
mia_auto.fermati()
mia_auto.descrivi()

print("-" * 20) # Separatore

mia_bici = Bicicletta()
mia_bici.parti()
mia_bici.fermati()
mia_bici.descrivi()