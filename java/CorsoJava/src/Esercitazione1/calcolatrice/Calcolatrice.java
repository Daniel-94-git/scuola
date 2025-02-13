package Esercitazione1.calcolatrice;

public class Calcolatrice {
    //private int numero1;
    //private int numero2;
    private int risultatoSomma;
    private int risultatoMultiplicazione;
    private int numeroTasti;
    private String marcaCalcolatrice;

    public Calcolatrice(int numeroTasti, String marcaCalcolatrice) {
        this.numeroTasti = numeroTasti;
        this.marcaCalcolatrice = marcaCalcolatrice;
    }

    public int getRisultatoSomma() {
        return risultatoSomma;
    }

    public int getRisultatoMultiplicazione() {
        return risultatoMultiplicazione;
    }

    public int getNumeroTasti() {
        return numeroTasti;
    }

    public void setNumeroTasti(int numeroTasti) {
        this.numeroTasti = numeroTasti;
    }

    public String getMarcaCalcolatrice() {
        return marcaCalcolatrice;
    }

    public void setMarcaCalcolatrice(String marcaCalcolatrice) {
        this.marcaCalcolatrice = marcaCalcolatrice;
    }

    public int somma(int numero1, int numero2) {
        risultatoSomma = numero1 + numero2;
        return risultatoSomma;
    }

    public int moltiplicazione(int numero1, int numero2) {
        risultatoMultiplicazione = numero1 * numero2;
        return risultatoMultiplicazione;
    }

    public void stampaRisultati() {
        System.out.println("Risultato somma: " + getRisultatoSomma());
        System.out.println("Risulato moltiplicazione: " + getRisultatoMultiplicazione());
    }

    @Override
    public String toString() {
        return "Calcolatrice{" +
                "risultatoSomma=" + risultatoSomma +
                ", risultatoMultiplicazione=" + risultatoMultiplicazione +
                ", numeroTasti=" + numeroTasti +
                ", marcaCalcolatrice='" + marcaCalcolatrice + '\'' +
                '}';
    }
}
