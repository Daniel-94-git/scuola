package Esercitazione2_SottoClassi;

public class Veicolo {

    private String marca;
    private int anno;

    public Veicolo(String marca, int anno) {
        this.marca = marca;
        this.anno = anno;
    }

    public void stampaDettagli() {
        System.out.println("Marca: " + marca + ", Anno: " + anno);
    }
}

