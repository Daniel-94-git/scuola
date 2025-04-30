package Esercitazione52.Esercitazione2_SottoClassi;

// Sottoclasse Camion

class Camion_sub extends Veicolo_Master {

    private double capacitàCarico;


    public Camion_sub(String marca, int anno, double capacitàCarico) {

        super(marca, anno);
        this.capacitàCarico = capacitàCarico;
    }

    @Override
    public void stampaDettagli() {
        super.stampaDettagli();
        System.out.println("Capacità di carico in tonnellate : " + capacitàCarico);
    }
}



