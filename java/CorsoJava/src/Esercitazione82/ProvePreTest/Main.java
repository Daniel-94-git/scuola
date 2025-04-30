package ProvePreTest;

import java.util.HashMap;
import java.util.LinkedList;

public class Main {

    public static void main(String[] args) {


        Auto pippo = new Auto("Subaru","impreza",2005);
        Auto pluto = new Auto("audi","s5",2005);
        Auto caio = new Auto("tesla","y",2005);

        LinkedList<Auto> listaLinked = new LinkedList<>();

        // aggiungo elementi a linkedlist
        listaLinked.add(pippo);
        listaLinked.add(pluto);
        listaLinked.add(caio);

        // visualizzo primo elemento nella lista
        System.out.println("La prima auto nella lista : " + listaLinked.getFirst());

        // elimino ultimo elemento nella lista

        System.out.println("L'ultima auto nella lista : " + listaLinked.getLast());
        System.out.println("\n");
        listaLinked.removeLast();
        System.out.println("Dopo eliminazione ultima  auto nella lista : " + listaLinked.getLast());
        System.out.println("\n");

        System.out.println(listaLinked.peek());
        System.out.println(listaLinked.poll());
        System.out.println("\n");

        System.out.println(listaLinked);


    }
}
