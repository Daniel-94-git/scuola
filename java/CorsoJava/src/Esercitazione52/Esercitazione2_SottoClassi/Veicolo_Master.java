package Esercitazione52.Esercitazione2_SottoClassi;

public class Veicolo_Master {

    private String marca;
    private int anno;

    public Veicolo_Master(String marca, int anno) {
        this.marca = marca;
        this.anno = anno;
    }

    public void stampaDettagli() {
        System.out.println("Marca: " + marca + ", Anno: " + anno);
    }
}

