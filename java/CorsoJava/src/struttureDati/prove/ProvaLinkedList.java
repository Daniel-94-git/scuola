package struttureDati.prove;

import java.util.Iterator;
import java.util.LinkedList;

public class ProvaLinkedList {
    public static void main(String[] args) {

        LinkedList<String> link  = new LinkedList<>();

        // aggiungo elementi con add
        link.add("Pomo");
        link.add("Beast");
        link.add("Lulla");

        // add first, add last
        link.addFirst("Bomb");
        link.addLast("Bao");

        // visualizzazione lista intera
        System.out.println("Lista : " + link);

        // accesso al primo e ultimo elemento
        System.out.println("Primo elemento : " + link.getFirst());
        System.out.println("Ultimo elemento : " + link.getLast());

        // rimozione primo e ultimo elemento
        System.out.println("Primo elemento : " + link.removeFirst());
        System.out.println("Ultimo elemento : " + link.removeLast());


        // utilizzo come pila lifo
        link.push("Smoke");
        String top = link.pop();
        System.out.println("Rimuovo elemento dalla pila : " + top);

        // utilizzo come pila fifo
        link.offer("Nina");
        String first = link.poll();
        System.out.println("Elemento rimosso dalla coda : " + first);

        // itereazione con iterator
        System.out.println("Iterazione sulla lista : ");
        Iterator<String> iterator =  link.iterator();
        while(iterator.hasNext()){
            System.out.println(iterator.next());
        }
    }
}
