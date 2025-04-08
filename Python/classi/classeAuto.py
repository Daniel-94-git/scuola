class auto:

    def __init__(self, marca, cilindrata, anno, serbatoio):
        self._marca = marca
        self._cilindrata = cilindrata
        self._anno = anno
        self._serbatoio = serbatoio

    def riempire(self, benzina):
        if self._serbatoio >= 100:
            print("Il serbatoio è pieno!")
        elif 50 <= self._serbatoio <= 100:
            if self._serbatoio + benzina <= 100:
                print("Hai fatto il pieno!")
                self._serbatoio += benzina
            elif self._serbatoio + benzina > 100:
                print("Troppa benzina!")
        else:
            print(f"Hai inserito {benzina} litri di benzina!")
            self._serbatoio += benzina

    # Getter per la marca
    def get_marca(self):
        return self._marca

    # Setter per la marca
    def set_marca(self, nuova_marca):
        if isinstance(nuova_marca, str) and nuova_marca:
            self._marca = nuova_marca
        else:
            print("Errore: La marca deve essere una stringa non vuota.")

    # Definizione della proprietà 'marca'
    marca = property(get_marca, set_marca)

    # Getter per la cilindrata
    def get_cilindrata(self):
        return self._cilindrata

    # Setter per la cilindrata
    def set_cilindrata(self, nuova_cilindrata):
        if isinstance(nuova_cilindrata, int) and nuova_cilindrata > 0:
            self._cilindrata = nuova_cilindrata
        else:
            print("Errore: La cilindrata deve essere un intero positivo.")

    # Definizione della proprietà 'cilindrata'
    cilindrata = property(get_cilindrata, set_cilindrata)

    # Getter per l'anno
    def get_anno(self):
        return self._anno

    # Setter per l'anno
    def set_anno(self, nuovo_anno):
        if isinstance(nuovo_anno, int) and nuovo_anno > 0:
            self._anno = nuovo_anno
        else:
            print("Errore: L'anno deve essere un intero positivo.")

    # Definizione della proprietà 'anno'
    anno = property(get_anno, set_anno)

    # Getter per il serbatoio
    def get_serbatoio(self):
        return self._serbatoio

    # Setter per il serbatoio
    def set_serbatoio(self, nuovo_livello):
        if isinstance(nuovo_livello, (int, float)) and 0 <= nuovo_livello <= 100:
            self._serbatoio = nuovo_livello
        else:
            print("Errore: Il livello del serbatoio deve essere un numero tra 0 e 100.")

    # Definizione della proprietà 'serbatoio'
    serbatoio = property(get_serbatoio, set_serbatoio)


volvo = auto("volvone", 1900, 2025, 10)
volvo.riempire(50)

# Utilizzo delle proprietà (accesso come attributi normali)
print(f"Marca: {volvo.marca}")
print(f"Serbatoio: {volvo.serbatoio}")

# Modifica delle proprietà
volvo.marca = "Volvo"
volvo.serbatoio = 60

print(f"Nuova marca: {volvo.marca}")
print(f"Nuovo serbatoio: {volvo.serbatoio}")

volvo.anno = "duemila" # Tenta di impostare un valore non valido (il setter lo intercetta)
print(f"Anno: {volvo.anno}")

