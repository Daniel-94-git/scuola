class Bici :
    def __init__(self,peso,marce,tipo):
        self.peso = peso
        self.marce = marce
        self.tipo = tipo
    

    def pedalare(self,km):
        print(f"Hai pedalato per {km} km")
        
    
    def descrizione(self):
        return f"La tua bici pesa : {self.peso} kg \nha {self.marce} marce\ned è di tipo {self.tipo}"
    
    

class Mountainbike(Bici):
    def __init__(self, peso, marce, tipo,gomme):
        super().__init__(peso, marce, tipo)
        self.gomme =gomme
        
    def descrizione(self):
        return f"{super().descrizione()}\ne le sue gomme sono di tipo {self.gomme}"
    
    
    def aumentoPeso(self,carico):
        self.peso =self.peso + carico
        return self.peso
    

bici1 = Mountainbike(5,8,"MountineBike","Chiodate")
print(bici1.descrizione())
bici1.aumentoPeso(20)
print(f"adesso pesa : {bici1.peso}")
