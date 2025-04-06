class Cane:
    
    def __init__(self,razza,peso,cucciolo,eta):
        self.__razza = razza
        self.__peso = peso
        self.__cucciolo = cucciolo
        self.__eta = eta
        
    def isCucciolo(self):
        if self.__eta < 1:
            self.__cucciolo = True
        else:
            self.__cucciolo = False
            
        return self.__cucciolo

    def ingrassa(self,cibo):
        if cibo >1:
            self.__peso = self.__peso + (cibo /100)
        else:
            print("Errore nel inserimento del cibo")
            
        return self.__peso
    
    
    
    @property
    def razza(self):
        return self.__razza
    
    @property
    def peso(self):
        return self.__peso
    
    @property
    def cucciolo(self):
        return self.__cucciolo
    
    @property
    def eta(self):
        return self.__eta
    
    @razza.setter
    def razza(self, nuova_razza):
        """Setter per l'attributo razza."""
        if isinstance(nuova_razza, str) and nuova_razza:
            self.__razza = nuova_razza
            print(f"La razza di {self.__razza} è stata impostata a: {nuova_razza}")
        else:
            print("Errore: La razza deve essere una stringa non vuota.")
            
    @peso.setter
    def peso(self, nuovo_peso):
        """Setter per l'attributo peso."""
        if isinstance(nuovo_peso, (int, float)) and nuovo_peso >= 0:  
            self.__peso = nuovo_peso
            print(f"Il peso è stato impostato a: {nuovo_peso}")
        else:
            print("Errore: Il peso deve essere un numero (intero o decimale) non negativo.")
            
    @eta.setter  
    def eta(self, nuova_eta):
        """Setter per l'attributo eta."""
        if isinstance(nuova_eta, (int, float)) and nuova_eta >= 0:
            self.__eta = nuova_eta
            print(f"L'età è stata impostata a: {nuova_eta}")
        else:
            print("Errore: L'età deve essere un numero (intero o decimale) non negativo.")
            
    @cucciolo.setter
    def cucciolo(self, is_cucciolo):
        """Setter per l'attributo cucciolo."""
        if isinstance(is_cucciolo, bool):
            self.__cucciolo = is_cucciolo
            print(f"Impostato come {'cucciolo' if self.__cucciolo else 'adulto'}.")
        else:
            print("Errore: L'attributo cucciolo deve essere un valore booleano (True o False).")
            
    
Beast = Cane("Meticcio",30,False,1.5)
Beast.eta = 5
print(f"Il peso prima della modifica : {Beast.peso}")
Beast.peso = 25
print(f"Il peso dopo la modifica : {Beast.peso}")
Beast.ingrassa(600)
print(f"Il peso dopo il metodo .ingrassa : {Beast.peso}")
print(f"La razza : {Beast.razza}, l'età : {Beast.eta}, è un cucciolo per il mio programma ? Esito : {Beast.cucciolo}")