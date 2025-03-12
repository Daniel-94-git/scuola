package esercizio2;

import esercizio1.Studente;

public class main {
    public static void main(String[] args) {

        Auto veicolo = new Auto("BMW","M3",1990);
        System.out.println("Il tuo modello è vecchio : " + veicolo.isVecchia());

        veicolo.setAnno(2019);
        System.out.println("Il tuo modello è vecchio : " + veicolo.isVecchia());




    }
}
