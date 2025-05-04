package Esercitazione82.Rubrica;

import java.util.HashMap;

public class Main {
    public static void main(String[] args) {
        //Rubrica Telefonica
        //Realizzare una classe Rubrica con metodi per
        //aggiungere, cercare e rimuovere contatti (usare HashMap).

/*
        HashMap<String,Integer> Rubrica = new HashMap<>();

        Rubrica.put("Anna",38729131);
        Rubrica.put("Giovanni",247879497);
        Rubrica.put("Noemi",324872832);

        boolean trovato;
        trovato = Rubrica.containsKey("Noemi");

        System.out.println("Noemi è presente : " + trovato);

        Rubrica.remove("Anna",38729131);

        System.out.println(Rubrica);
*/

        HashMap<String,Integer> listaContatti = new HashMap<>();

        Rubrica contatti = new Rubrica(listaContatti);

        contatti.aggiungiContatto("Anna", 274624768);
        contatti.aggiungiContatto("Luigi",721874872);
        contatti.aggiungiContatto("pippo",432728724);

        System.out.println("Lista contatti : ");
        System.out.println(contatti);

        contatti.cercaContatto("pippo");

        contatti.eliminaContatto("pippo");
        System.out.println("Lista contatti : ");
        System.out.println(contatti);
    }

}
