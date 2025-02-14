package Esercitazione2_SottoClassi;


// Sottoclasse Moto
class Moto extends Veicolo {
    private int cilindrata;

    public Moto(String marca, int anno, int cilindrata) {
        super(marca, anno);
        this.cilindrata = cilindrata;
    }

    @Override
    public void stampaDettagli() {
        super.stampaDettagli();
        System.out.println("Cilindrata: " + cilindrata + " cc");
    }
}
