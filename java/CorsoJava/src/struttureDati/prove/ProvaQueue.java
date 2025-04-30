package struttureDati.prove;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Queue;

public class ProvaQueue {
    public static void main(String[] args) {

        Queue<String> coda = new LinkedList<>();

        // aggiungo elementi alla coda
        coda.offer("Smoke");
        coda.offer("Bao");
        coda.offer("Beast");

        // visuallizzo il prossimo cliente senza rimuoverlo
        System.out.println("Coda cliente : " + coda.peek());

        // servizio del cliente
        String fila = coda.poll();
        System.out.println("Cliente servito : " + fila);

        // visualizzo il nuovo prossimo cliente
        System.out.println("Visualizza prossimo cliente : " + coda.peek());

        // verifico se la coda è vuota
        System.out.println("La coda è vuota : " + coda.isEmpty());

        // numero di clienti in attesa
        System.out.println("Clienti in attesa : " + coda.size());

        // iterazione sulla coda
        System.out.println("Clienti in coda : ");
        for(String cliente : coda){
            System.out.println(cliente);
        }
    }
}
