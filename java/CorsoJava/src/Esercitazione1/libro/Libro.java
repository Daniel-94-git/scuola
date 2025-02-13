package Esercitazione1.libro;


public class Libro {

    private String titolo;
    private String autore;
    private int annoPubblicazione;

    public Libro(String titolo, String autore, int annoPubblicazione){

        this.autore = autore;
        this.titolo = titolo;
        this.annoPubblicazione = annoPubblicazione;

    }

    public void stampaDettagli(){

        System.out.println(this.titolo);
        System.out.println(this.autore);
        System.out.println(this.annoPubblicazione);

    }

    public String getTitolo() {
        return titolo;
    }

    public void setTitolo(String titolo) {
        this.titolo = titolo;
    }

    public String getAutore() {
        return autore;
    }

    public void setAutore(String autore) {
        this.autore = autore;
    }

    public int getAnnoPubblicazione() {
        return annoPubblicazione;
    }

    public void setAnnoPubblicazione(int annoPubblicazione) {
        this.annoPubblicazione = annoPubblicazione;
    }


}
