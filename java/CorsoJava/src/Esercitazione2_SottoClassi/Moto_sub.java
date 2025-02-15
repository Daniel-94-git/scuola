package Esercitazione2_SottoClassi;


// Sottoclasse Moto
class Moto_sub extends Veicolo_Master {
    private int cilindrata;

    public Moto_sub(String marca, int anno, int cilindrata) {
        super(marca, anno);
        this.cilindrata = cilindrata;
    }

    @Override
    public void stampaDettagli() {
        super.stampaDettagli();
        System.out.println("Cilindrata: " + cilindrata + " cc");
    }
}
