import java.util.LinkedList;
import java.util.Iterator;

public class EsempioLinkedList {
    public static void main(String[] args) {
        // Creazione di una LinkedList di stringhe
        LinkedList<String> programmingLangs = new LinkedList<>();

        // Aggiunta di elementi alla lista
        programmingLangs.add("Java");
        programmingLangs.add("Python");
        programmingLangs.add("JavaScript");

        // Aggiunta all'inizio e alla fine
        programmingLangs.addFirst("C++");
        programmingLangs.addLast("Ruby");

        // Visualizzazione dell'intera lista
        System.out.println("Linguaggi: " + programmingLangs);

        // Accesso al primo e all'ultimo elemento
        System.out.println("Primo: " + programmingLangs.getFirst());
        System.out.println("Ultimo: " + programmingLangs.getLast());

        // Rimozione del primo e dell'ultimo elemento
        String primo = programmingLangs.removeFirst();
        String ultimo = programmingLangs.removeLast();
        System.out.println("Rimossi: " + primo + ", " + ultimo);

        // Utilizzo come pila (LIFO)
        programmingLangs.push("Go");
        String top = programmingLangs.pop();
        System.out.println("Elemento rimosso dalla pila: " + top);

        // Utilizzo come coda (FIFO)
        programmingLangs.offer("Kotlin");
        String first = programmingLangs.poll();
        System.out.println("Elemento rimosso dalla coda: " + first);

        // Iterazione con Iterator
        System.out.println("Iterazione sulla lista:");
        Iterator<String> iterator = programmingLangs.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
    }
}