package Esercizi;


public class Libro {

    private String titolo;
    private String autore;
    private int annoPubblicazione;

    public  Libro (String titolo,String autore, int annoPubblicazione){

        this.autore = autore;
        this.titolo = titolo;
        this.annoPubblicazione = annoPubblicazione;

    }

    public void stampaDettagli(String titolo, String autore, int annoPubblicazione){

        System.out.println(titolo);
        System.out.println(autore);
        System.out.println(annoPubblicazione);

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
