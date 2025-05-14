class Auto:
# Costruttore
    def __init__(self, marca):
        self.marca = marca
        self.velocità = 0
        
# Metodi
    def accelera(self):
        self.velocità += 10
        print(f"Vroom! Velocità: {self.velocità}")
    def frena(self):
        if self.velocità > 0:
            self.velocità -= 10
            print(f"Frenata! Velocità: {self.velocità}")
            
# Creazione di un'istanza
auto1 = Auto("Fiat")
auto1.accelera() # Output: Vroom! Velocità: 10