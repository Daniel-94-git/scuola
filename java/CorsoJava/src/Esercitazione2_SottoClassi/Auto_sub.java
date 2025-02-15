package Esercitazione2_SottoClassi;

// Sottoclasse Auto
class Auto_sub extends Veicolo_Master {
    private int numeroPorte;

    public Auto_sub(String marca, int anno, int numeroPorte) {
        super(marca, anno);
        this.numeroPorte = numeroPorte;
    }

    @Override
    public void stampaDettagli() {
        super.stampaDettagli();
        System.out.println("Numero di porte: " + numeroPorte);
    }
}
