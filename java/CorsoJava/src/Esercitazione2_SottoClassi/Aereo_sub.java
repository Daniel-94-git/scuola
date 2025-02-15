package Esercitazione2_SottoClassi;

class Aereo_sub extends Veicolo_Master {

    private int numeroPosti ;

    public Aereo_sub(String marca , int anno , int numeroPosti){

        super(marca, anno);
        this.numeroPosti = numeroPosti;
    }

    @Override
    public  void stampaDettagli(){

        super.stampaDettagli();
        System.out.println("Il numero dei posti è : " + numeroPosti);

    }

    public int getNumeroPosti() {
        return numeroPosti;
    }

    public void setNumeroPosti(int numeroPosti) {
        this.numeroPosti = numeroPosti;
    }
}
