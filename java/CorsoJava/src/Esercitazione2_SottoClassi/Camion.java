package Esercitazione2_SottoClassi;

// Sottoclasse Camion

class Camion extends Veicolo {

    private double capacitàCarico;


    public Camion(String marca, int anno, double capacitàCarico) {

        super(marca, anno);
        this.capacitàCarico = capacitàCarico;
    }

    @Override
    public void stampaDettagli() {
        super.stampaDettagli();
        System.out.println("Capacità di carico in tonnellate : " + capacitàCarico);
    }
}



